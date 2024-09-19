/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaez <dpaez@student.42barcelona.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 10:18:05 by dpaez             #+#    #+#             */
/*   Updated: 2024/09/19 09:37:29 by dpaez            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_display_file(int fd)
{
	char	*buffer;

	while (read(fd, &buffer, 1) != 0)
		write(1, &buffer, 1);
}

int	main(int argc, char *argv[])
{
	int	fd;

	if (argc != 2)
	{
		if (argc < 2)
			write(1, "File name missing.\n", 19);
		if (argc > 2)
			write(1, "Too many arguments.\n", 20);
		return (-1);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		write(1, "Cannot read file.\n", 18);
		return (-1);
	}
	ft_display_file(fd);
	close(fd);
	return (0);
}

/*
Errores
No argument -> "File name missing."
More than one argument -> "Too many arguments."
File cannot be rear -> "Cannot read file."
*/
