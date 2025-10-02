/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbercaco <gbercaco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 15:02:20 by gbercaco          #+#    #+#             */
/*   Updated: 2025/10/02 14:56:23 by gbercaco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*new_node(int value)
{
	t_stack	*node;

	node = malloc(sizeof(t_stack));
	if (!node)
		return (NULL);
	node->value = value;
	node->next = NULL;
	return (node);
}

void	print_stack(t_stack *stack)
{
	while (stack)
	{
		printf("%d\n", stack->value);
		stack = stack->next;
	}
}

void	add_back(t_stack **stack, t_stack *new)
{
	t_stack	*tmp;

	if (!stack || !new)
		return ;
	if (!*stack)
	{
		*stack = new;
		return ;
	}
	tmp = *stack;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
}
// int	is_sorted(t_stack *stack)
// {
// 	t_stack *temp;
// 	int min_value;

// 	min_value = stack;
// 	temp = stack;
// 	while (temp->next)
// 	{
// 		temp = temp->next;
// 	}

// }

int	is_number(const char *str)
{
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

int has_duplicate(char *argv[], int i)
{
	int j;

	j = 0;
	while (++j < i)
		if (ft_atoi(argv[i]) == ft_atoi(argv[j]))
			return (1);
	return (0);
}

void	free_stack(t_stack *stack)
{
	t_stack *temp;

	while (stack)
	{
		temp = stack->next;
		free(stack);
		stack = temp;
	}
	
}