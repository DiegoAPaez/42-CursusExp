# include <unistd.h>
# sysconf(_SC_OPEN_MAX) -> OPEN_MAX = 1024
# ulimit -n / -a
BUFFER_SIZES=(1 10 42 9999 10000000)
YELLOW='\033[1;33m'
GREEN='\033[0;32m'
NC='\033[0m' # No Color

echo -e "${YELLOW}"
echo "   ____      _                       _       _ _             "
echo "  / ___| ___| |_     _ __   _____  _| |_    | (_)_ __   ___  "
echo " | |  _ / _ \ __|   | '_ \ / _ \ \/ / __|   | | | '_ \ / _ \ "
echo " | |_| |  __/ |_    | | | |  __/>  <| |_    | | | | | |  __/ "
echo "  \____|\___|\__|___|_| |_|\___/_/\_\\__|___|_|_|_| |_|\___| "
echo "               |_____|                 |_____|               "
echo -e "${NC}"

echo "Choose test type:"
echo "1) Mandatory tests"
echo "2) Bonus tests"
read -p "Enter your choice: " choice

if [ "$choice" -eq 1 ]; then
    for BUFFER_SIZE in "${BUFFER_SIZES[@]}"; do
        echo -e "${YELLOW}"
        echo "Testing with BUFFER_SIZE=${BUFFER_SIZE}"
        echo -e "${NC}"
        gcc -D BUFFER_SIZE=${BUFFER_SIZE} -Wall -Wextra -Werror tester.c get_next_line.c get_next_line_utils.c -o tester
        valgrind --leak-check=full --track-origins=yes ./tester 2>&1 | tee valgrind_output.txt | awk '
            BEGIN { color_start = "\033[0;32m"; color_end = "\033[0m"; in_heap_summary = 0 }
            /HEAP SUMMARY:/ { print color_start prev_line color_end; in_heap_summary = 1 }
            /ERROR SUMMARY:/ { print color_start $0 color_end; in_heap_summary = 0; next }
            /==[0-9]+==/ && /All heap blocks were freed -- no leaks are possible/ { print; next }
            /==[0-9]+==/ && /^$/ { print; next }
            { if (in_heap_summary) print color_start $0 color_end; else print $0 }
            { prev_line = $0 }
        '
        echo -e "${YELLOW}"
        read -p "Press enter to continue..."
        echo -e "${NC}"
        clear
    done
elif [ "$choice" -eq 2 ]; then
    for BUFFER_SIZE in "${BUFFER_SIZES[@]}"; do
        echo -e "${YELLOW}"
        echo "Testing with BUFFER_SIZE=${BUFFER_SIZE}"
        echo -e "${NC}"
        gcc -D BUFFER_SIZE=${BUFFER_SIZE} -Wall -Wextra -Werror tester_bonus.c get_next_line_bonus.c get_next_line_bonus.h get_next_line_utils_bonus.c -o tester
        valgrind --leak-check=full --track-origins=yes ./tester 2>&1 | tee valgrind_output.txt | awk '
            BEGIN { color_start = "\033[0;32m"; color_end = "\033[0m"; in_heap_summary = 0 }
            /HEAP SUMMARY:/ { print color_start prev_line color_end; in_heap_summary = 1 }
            /ERROR SUMMARY:/ { print color_start $0 color_end; in_heap_summary = 0; next }
            /==[0-9]+==/ && /All heap blocks were freed -- no leaks are possible/ { print; next }
            /==[0-9]+==/ && /^$/ { print; next }
            { if (in_heap_summary) print color_start $0 color_end; else print $0 }
            { prev_line = $0 }
        '
        echo -e "${YELLOW}"
        read -p "Press enter to continue..."
        echo -e "${NC}"
        clear
    done
else
    echo "Invalid choice. Exiting."
    exit 1
fi
rm -f tester valgrind_output.txt