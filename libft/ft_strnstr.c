/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmakgale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/26 16:06:16 by tmakgale          #+#    #+#             */
/*   Updated: 2017/09/26 16:06:20 by tmakgale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	unsigned int		i;
	unsigned int		j;
	unsigned int		length_s2;

	i = 0;
	length_s2 = ft_strlen(s2);
	if (ft_strlen(s2) == 0)
		return ((char*)s1);
	while (s1[i] && i < n)
	{
		j = 0;
		while (s1[i + j] == s2[j])
		{
			if ((j == length_s2 - 1) && (i + j < n))
				return ((char*)(s1 + i));
			j++;
		}
		i++;
	}
	return (NULL);
}
