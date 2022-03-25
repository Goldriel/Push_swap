/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarrakis <jarrakis@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 19:29:34 by jarrakis          #+#    #+#             */
/*   Updated: 2022/03/25 19:32:45 by jarrakis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	exit_program(t_stacks *stacks)
{
	clear_stacks(stacks);
	exit(print_error());
}

static void	del_stack(t_node **lst, size_t size)
{
	t_node	*to_free;
	size_t	i;

	to_free = *lst;
	if (lst == NULL || *lst == NULL)
		return ;
	i = 0;
	while (i < size)
	{
		*lst = to_free->next;
		free(to_free);
		to_free = *lst;
		i++;
	}
	*lst == NULL;
}

void	clear_stacks(t_stacks *stacks)
{
	del_stack(&stacks->a.head, stacks->a.size);
	del_stack(&stacks->b.head, stacks->b.size);
}
