/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbercaco <gbercaco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 15:02:20 by gbercaco          #+#    #+#             */
/*   Updated: 2025/10/07 15:19:45 by gbercaco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_stack *stack)
{
	t_stack	*temp;

	temp = stack;
	while (temp->next)
	{
		if (temp->value > temp->next->value)
			return (0);
		temp = temp->next;
	}
	return (1);
}

int	is_number(const char *str)
{
	long	n;

	n = ft_atol(str);
	if (n > 2147483647 || n < -2147483648)
		return (0);
	if (*str == '+' || *str == '-')
		str++;
	if (!*str)
		return (0);
	while (*str)
	{
		if (!ft_isdigit(*str))
			return (0);
		str++;
	}
	return (1);
}

int	has_duplicate(char *argv[], int i)
{
	int	j;

	j = 0;
	while (++j < i)
		if (ft_atoi(argv[i]) == ft_atoi(argv[j]))
			return (1);
	return (0);
}

void  set_indices(t_piles *piles)
{ 
	t_stack *tmp1;
	t_stack *tmp2;
	int i;
	if (!piles->pile_a)
    return ;
	tmp1 = piles->pile_a;
	while (tmp1)
	{
		i = 0;
		tmp2 = piles->pile_a;
		while (tmp2)
		{
			if (tmp1->value > tmp2->value)
				i++;
			tmp2 = tmp2->next;	
		}
		tmp1->index = i;
		tmp1 = tmp1->next;
	}	
}
