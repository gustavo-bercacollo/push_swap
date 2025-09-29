/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbercaco <gbercaco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 15:02:30 by gbercaco          #+#    #+#             */
/*   Updated: 2025/09/29 16:53:49 by gbercaco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(void)
{
	t_piles pile;
	t_stack *a1 = new_node(2);
	t_stack *a2 = new_node(5);
	t_stack *a3 = new_node(7);

	t_stack *b1 = new_node(6);
	t_stack *b2 = new_node(9);
	t_stack *b3 = new_node(1);

	a1->next = a2;
	a2->next = a3;

	b1->next = b2;
	b2->next = b3;

	pile.pile_a = a1;
	pile.pile_b = b1;
	
	printf("Antes do ss\n");
	print_stack(pile.pile_a);
	print_stack(pile.pile_b);
	
	ss(&pile);
	
	printf("Depois do ss\n");
	print_stack(pile.pile_a);
	print_stack(pile.pile_b);
	
	return (0);
}