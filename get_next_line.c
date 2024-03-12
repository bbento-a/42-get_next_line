/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbento-a <bbento-a@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 11:27:18 by bbento-a          #+#    #+#             */
/*   Updated: 2024/03/12 10:27:21 by bbento-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	buffer [BUFFER_SIZE + 1];
	char		*line;
	int			i;

	i = 0;
	if (fd < 0 || read(fd, 0, 0) < 0 || BUFFER_SIZE < 1)
	{
		while (buffer[i])
			buffer[i++] = '\0';
		return (NULL);
	}
	line = NULL;
	while (buffer[0] || read(fd, buffer, BUFFER_SIZE) > 0)
	{
		line = ft_strjoin(line, buffer);
		if (ft_buffer_clean(buffer))
			break ;
	}
	return (line);
}
/*
int	main(void)
{
	int		fd;
	int		i;
	char	*line;

	fd = 0;
	i = 1;
	line = get_next_line(fd);
	while (line != NULL)
	{
		printf("line %d: %s", i++, line);
		free(line);
		line = get_next_line(fd);
	}
	if (line)
		free(line);
	close(fd);
	return (0);
}
*/
