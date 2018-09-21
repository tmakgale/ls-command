/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmakgale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/26 15:40:41 by tmakgale          #+#    #+#             */
/*   Updated: 2017/09/26 15:40:48 by tmakgale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	ch;
	unsigned char	*dst_pt;
	unsigned char	*src_pt;

	if (!dst || !src)
		return (NULL);
	ch = (unsigned char)c;
	dst_pt = (unsigned char*)dst;
	src_pt = (unsigned char*)src;
	while (n-- > 0)
	{
		*dst_pt = *src_pt;
		if (*dst_pt++ == ch)
			return (dst_pt);
		src_pt++;
	}
	return (NULL);
}
