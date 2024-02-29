/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbento-a <bbento-a@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 10:14:25 by bbento-a          #+#    #+#             */
/*   Updated: 2024/02/29 19:58:31 by bbento-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0' && s[i] != '\n')
		i++;
	if (s[i] == '\n')
		i++;
	return(i);
}

//MISSING WHILE LOOP FOR BUFFER PART (s2)

char	*ft_strjoin(char *s1, char *s2)
{
	int i;
	
	i = 0;
	res = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!res)
		return(NULL);
	while (s1[i] != '\0')
	{
		res[i] = s1[i];
		i++;
	}
	free(s1);
	while (s2)
	{
		res[i]
	}
}

int	*ft_buffer_clean(char *buff)
{
	int i;
	int	j;
	int	nl;

	i = 0;
	j = 0;
	nl = 0;
	while (buff[0] != '\0')
	{
		if (nl)
			buff[j++] = buff[i];
		if (buff[i] == '\n')
			nl = 1;
		buff[i++] = '\0';
	}
	return(nl);
}
