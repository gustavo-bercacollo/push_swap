/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbercaco <gbercaco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 15:02:30 by gbercaco          #+#    #+#             */
/*   Updated: 2025/10/01 19:54:08 by gbercaco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_piles	pile;

	if (argc < 2)
		return (0);
	pile.pile_a = NULL;
	pile.pile_b = NULL;
	
	for (int i = 1; i < argc; i++)
	{
		if (is_number(argv[i]) && !has_duplicate(argv, i))
			add_back(&pile.pile_a, new_node(ft_atoi(argv[i])));
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	print_stack(pile.pile_a);
	return (0);
}
