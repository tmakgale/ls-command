/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmakgale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/26 15:28:45 by tmakgale          #+#    #+#             */
/*   Updated: 2017/09/26 15:28:46 by tmakgale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void		free_one(t_files *head)
{
	if (head)
	{
		if (head->permissions)
			ft_memdel((void **)&head->permissions);
		if (head->date)
			ft_memdel((void **)&head->date);
		if (head->name)
			ft_memdel((void **)&head->name);
		if (head->parent_dir)
			ft_memdel((void **)&head->parent_dir);
		ft_memdel((void **)&head);
	}
}

void		free_list(t_files *head)
{
	t_files	*next;

	while (head)
	{
		next = head->next;
		free_one(head);
		head = next;
	}
}

void		free_final_list(t_files *head)
{
	t_files		*tmp;

	while (head)
	{
		if (head->name)
			ft_memdel((void **)&head->name);
		if (head->parent_dir)
			ft_memdel((void **)&head->parent_dir);
		tmp = head;
		head = head->next;
		ft_memdel((void **)&tmp);
	}
}

void		free_main_struct(t_ls_args *args)
{
	ft_memdel((void **)&args->authorized_options);
	ft_memdel((void **)&args->options);
	free_final_list(args->dirs);
	ft_memdel((void **)&args);
}
