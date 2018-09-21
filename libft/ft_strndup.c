/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmakgale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/26 16:04:37 by tmakgale          #+#    #+#             */
/*   Updated: 2017/09/26 16:04:40 by tmakgale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s1, size_t n)
{
	size_t	length;
	char	*str;

	if (!s1)
		return (NULL);
	length = ft_strlen(s1);
	if (n < length)
		length = n;
	if (!(str = (char*)malloc(length + 1)))
		return (NULL);
	ft_strncpy(str, s1, length);
	return (str);
}
