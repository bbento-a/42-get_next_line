/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbento-a <bbento-a@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 11:27:18 by bbento-a          #+#    #+#             */
/*   Updated: 2024/02/29 12:34:31 by bbento-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	buffer [BUFFER_SIZE + 1];
	char		*line;

	if (!fd || read (fd, 0, 0) || BUFFER_SIZE < 1)
	{
		ft_buffer_clean(buffer);
		return (NULL);
	}
	line = NULL;
	while ( || read (fd, buffer, BUFFER_SIZE) > 0)
	{

	}
	return (line);
}
