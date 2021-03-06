/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarrakis <jarrakis@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 19:42:30 by jarrakis          #+#    #+#             */
/*   Updated: 2022/03/27 19:10:53 by jarrakis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	operations(char *op, t_stacks *stacks)
{
	bool	valid;

	valid = false;
	if (!ft_strcmp(op, "pa"))
		valid = push(&stacks->a, &stacks->b);
	if (!ft_strcmp(op, "pb"))
		valid = push(&stacks->b, &stacks->a);
	if (!ft_strcmp(op, "sa") || !ft_strcmp(op, "ss"))
		valid = swap(&stacks->a);
	if (!ft_strcmp(op, "sb") || !ft_strcmp(op, "ss"))
		valid = swap(&stacks->b);
	if (!ft_strcmp(op, "ra") || !ft_strcmp(op, "rr"))
		valid = true;
	if (!ft_strcmp(op, "rb") || !ft_strcmp(op, "rr"))
		valid = true;
	if (!ft_strcmp(op, "rra") || !ft_strcmp(op, "rrr"))
		valid = true;
	if (!ft_strcmp(op, "rrb") || !ft_strcmp(op, "rrr"))
		valid = true;
	return (valid);
}
