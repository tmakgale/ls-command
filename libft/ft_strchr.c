/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmakgale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/26 15:55:27 by tmakgale          #+#    #+#             */
/*   Updated: 2017/09/26 15:55:30 by tmakgale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*pt;
	char	locate;

	locate = c;
	pt = (char*)s;
	while (*pt)
	{
		if (*pt == locate)
			return (pt);
		pt++;
	}
	if (*pt == locate)
		return (pt);
	else
		return (NULL);
}
