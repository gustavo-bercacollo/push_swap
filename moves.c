/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbercaco <gbercaco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 13:47:23 by gbercaco          #+#    #+#             */
/*   Updated: 2025/09/29 14:45:01 by gbercaco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sa(t_piles *piles)
{
	t_stack *first;
	t_stack *second;
	
	if (!piles->pile_a || !piles->pile_a->next)
		return ;
	
	first = piles->pile_a;
	second = first->next;

	first->next = second->next;
	second->next = first;
	piles->pile_a = second;
	
}