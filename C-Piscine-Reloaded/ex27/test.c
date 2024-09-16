/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaez <dpaez@student.42barcelona.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 08:47:31 by dpaez             #+#    #+#             */
/*   Updated: 2024/09/16 08:56:35 by dpaez            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <errno.h>
#include <stdio.h>
#include <unistd.h>

void	disp_file(int fd)
{
	char buffer;

	while (read(fd, &buffer, 1) != 0)
		write(1, &buffer, 1);
}

int	main(int argc, char *argv[])
{
	int	fd;

	fd = open("test.txt", O_RDONLY);
	disp_file(fd);
	if (fd == -1) {
        // print which type of error have in a code
        printf("Error Number % d\n", errno);

        // print program detail "Success or failure"
        perror("Program");
    }
	return (0);
}
