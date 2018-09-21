/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmakgale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/26 15:27:38 by tmakgale          #+#    #+#             */
/*   Updated: 2017/09/26 15:27:41 by tmakgale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	print_error(char *message, int time)
{
	if (time == 1)
	{
		ft_putstr("ft_ls: ");
		perror(message);
	}
	else if (time == 2 && errno != 2)
	{
		ft_putstr(message);
		ft_putendl(":");
		ft_putstr("ft_ls: ");
		perror(message);
	}
}

void	error_message(char *message, int terminate)
{
	ft_putcolor("ERROR: ", "red");
	perror(message);
	if (terminate)
		exit(0);
}
