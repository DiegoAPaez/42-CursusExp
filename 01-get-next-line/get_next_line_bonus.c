/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaez <dpaez@student.42barcelona.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 10:27:11 by dpaez             #+#    #+#             */
/*   Updated: 2024/12/27 17:45:52 by dpaez            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_release(char *s)
{
	free(s);
	s = NULL;
	return (s);
}

char	*ft_buffer_handler(char *string, char *buffer)
{
	char	*tmp;

	if (!string)
		string = ft_strdup("");
	if (!string)
		return (NULL);
	tmp = string;
	string = ft_strjoin(tmp, buffer);
	tmp = ft_release(tmp);
	if (!string)
		return (NULL);
	return (string);
}

char	*ft_readfile(int fd, char *string, char *buffer)
{
	int	bufferread;

	bufferread = 1;
	while (bufferread > 0)
	{
		bufferread = read(fd, buffer, BUFFER_SIZE);
		if (bufferread == -1)
		{
			string = ft_release(string);
			return (NULL);
		}
		if (bufferread == 0)
			break ;
		buffer[bufferread] = '\0';
		string = ft_buffer_handler(string, buffer);
		if (!string)
			return (NULL);
		if (ft_strchr(buffer, '\n'))
			break ;
	}
	return (string);
}

char	*ft_freeline(char *string)
{
	char	*line;
	int		i;

	i = 0;
	while (string[i] && string[i] != '\n')
		i++;
	if (string[i] == '\0')
		return (NULL);
	line = ft_substr(string, i + 1, ft_strlen(string) - i);
	if (!line)
		return (NULL);
	if (*line == '\0')
		line = ft_release(line);
	string[i + 1] = '\0';
	return (line);
}

char	*get_next_line(int fd)
{
	static char	*string[FOPEN_MAX];
	char		*line;
	char		*buffer;

	if (fd < 0 || BUFFER_SIZE <= 0 || fd >= FOPEN_MAX)
		return (NULL);
	buffer = (char *)malloc(BUFFER_SIZE + 1);
	if (!buffer)
		return (NULL);
	line = ft_readfile(fd, string[fd], buffer);
	free(buffer);
	if (!line)
	{
		string[fd] = ft_release(string[fd]);
		return (NULL);
	}
	string[fd] = ft_freeline(line);
	return (line);
}
