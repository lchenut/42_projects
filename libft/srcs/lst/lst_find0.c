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

void			*lst_find0(t_lst *this, bool (*f)(void *))
{
	t_lst__		*ltmp;

	ltmp = this->head;
	while (ltmp)
	{
		if (f(ltmp->data))
			return (ltmp->data);
		ltmp = ltmp->next;
	}
	return (NULL);
}
