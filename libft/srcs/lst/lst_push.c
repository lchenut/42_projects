/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_norris_loves_the_norminette.c                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuck <chuck@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2042/02/30 42:00:00 by chuck             #+#    #+#             */
/*   Updated: 2042/02/30 41:59:59 by chuck            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <lst.h>

void			lst_push_front(t_lst *this, void *data)
{
	t_lst__		*to_push;

	to_push = lst_create_lst__(data);
	this->size += 1;
	if (!this->head)
	{
		to_push->next = NULL;
		this->head = to_push;
		this->tail = to_push;
		return ;
	}
	this->head->prev = to_push;
	to_push->next = this->head;
	this->head = to_push;
}
