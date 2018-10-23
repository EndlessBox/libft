/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_last_lst.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouladh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/12 13:52:01 by ybouladh          #+#    #+#             */
/*   Updated: 2018/10/12 13:52:02 by ybouladh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_add_last(t_list *lst, t_list *new)
{
	while (lst->next)
		lst->next = lst;
	lst->next = new;
}