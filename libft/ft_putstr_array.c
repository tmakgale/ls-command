/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_array.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmakgale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/26 15:53:37 by tmakgale          #+#    #+#             */
/*   Updated: 2017/09/26 15:53:40 by tmakgale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_array(char **array, char sep)
{
	int		i;

	i = 0;
	while (array[i])
	{
		ft_putstr(array[i]);
		if (array[i + 1] || sep == '\n')
			ft_putchar(sep);
		i++;
	}
}
