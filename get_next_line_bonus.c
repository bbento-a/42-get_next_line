/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbento-a <bbento-a@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 11:27:18 by bbento-a          #+#    #+#             */
/*   Updated: 2024/03/11 14:39:35 by bbento-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*get_next_line(int fd)
{
	static char	buffer[FOPEN_MAX][BUFFER_SIZE + 1];
	char		*line;
	int			i;

	i = 0;
	if (fd >= FOPEN_MAX)
		return (NULL);
	if (!fd || read(fd, 0, 0) < 0 || BUFFER_SIZE < 1)
	{
		while (buffer[fd][i])
			buffer[fd][i++] = 0;
		return (NULL);
	}
	line = NULL;
	while (buffer[fd][0] || read(fd, buffer[fd], BUFFER_SIZE) > 0)
	{
		line = ft_strjoin(line, buffer[fd]);
		if (ft_buffer_clean(buffer[fd]))
			break ;
	}
	return (line);
}
/*
int	main(void)
{
	int fd3;
	int	fd4;
	int	i;
	char *line;

	fd3 = open("test_files/test.txt", O_RDONLY);
	fd4 = open("test_files/test2.txt", O_RDONLY);
	i = 1;
	printf("FOPEN_MAX value: %d\n", FOPEN_MAX);

    while (fd3 != -1 || fd4 != -1)
    {
        line = get_next_line(fd3);
        if (line == NULL)
        {
            close(fd3);
            fd3 = -1;
        }
        else
        {
            printf("TEST_1 line %d: %s\n", i, line);
            free(line);
        }
        line = get_next_line(fd4);
        if (line == NULL)
        {
            close(fd4);
            fd4 = -1;
        }
        else
        {
            printf("TEST_2 line %d: %s\n", i, line);
            free(line);
        }
		i++;
    }
    return (0);
}*/
