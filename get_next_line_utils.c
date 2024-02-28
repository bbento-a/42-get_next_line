/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbento-a <bbento-a@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 10:14:25 by bbento-a          #+#    #+#             */
/*   Updated: 2024/02/28 12:13:28 by bbento-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		ft_strlen(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0' || s[i] != '\n')
		i++;
	if (s[i] == '\n')
		i++;
	return(i);
}

char	*ft_strjoin(char *s1, char *s2)
{}

char	*ft_buffer_clean(char *buf)
{}
