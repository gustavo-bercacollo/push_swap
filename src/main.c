/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbercaco <gbercaco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 15:02:30 by gbercaco          #+#    #+#             */
/*   Updated: 2025/10/02 20:40:30 by gbercaco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	validade_and_build_stack(int argc, char *argv[], t_piles *pile)
{
	int	i;

	i = 0;
	while (++i < argc)
	{
		if (!is_number(argv[i]) || has_duplicate(argv, i))
		{
			printf("Error\n");
			free_stack(pile->pile_a);
			return (0);
		}
		add_back(&pile->pile_a, new_node(ft_atoi(argv[i])));
	}
	return (1);
}
int	main(int argc, char *argv[])
{
	t_piles	pile;

	if (argc < 2)
		return (0);
	pile.pile_a = NULL;
	pile.pile_b = NULL;
	if (!validade_and_build_stack(argc, argv, &pile))
		return (1);
	print_stack(pile.pile_a);
	free_stack(pile.pile_a);
	free_stack(pile.pile_b);
	return (0);
}
