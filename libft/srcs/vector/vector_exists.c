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

#include "vector.h"

bool			vector_exists(t_vector *this, bool (*fn)(void *, void *),
								void *ctx)
{
	size_t		index;

	index = 0;
	while (index < this->current)
	{
		if (fn(this->data[index], ctx))
			return (true);
		index += 1;
	}
	return (false);
}
