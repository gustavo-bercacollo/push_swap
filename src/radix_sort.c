/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbercaco <gbercaco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 00:05:29 by gbercaco          #+#    #+#             */
/*   Updated: 2025/10/06 19:13:52 by gbercaco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	get_max_indice(t_piles *piles)
{
	t_stack *tmp;
	int max_index;
	
	tmp = piles->pile_a;
	max_index = piles->pile_a->index;
	while (tmp)
	{
		if (tmp->index > max_index)
			max_index = tmp->index;
		tmp = tmp->next;
	}
	return max_index;
}

static int get_max_bits(int max_index)
{
	int bits;

	bits = 0;
	while ((max_index >> bits) != 0)
		bits++;
	return bits;
}

void	radix(t_piles *piles)
{
	int max_index;
	int max_bits;
	int i;
	int size;
	int j;
	
	max_index = get_max_indice(piles);
	max_bits = get_max_bits(max_index);

	i = 0;
	while (i < max_bits)
	{
		size = stack_size(piles); 
		j = 0;
		while (j < size)
		{
			if (((piles->pile_a->index >> i) & 1) == 0)
				pb(piles);
			else
				ra(piles); 
			j++;
		}
		while (piles->pile_b)
			pa(piles);
		i++;
	}
}


