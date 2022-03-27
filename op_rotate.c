/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarrakis <jarrakis@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 18:31:02 by jarrakis          #+#    #+#             */
/*   Updated: 2022/03/27 18:33:47 by jarrakis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	rotate(t_stack *stack)
{
	t_node	*to_move;

	if (stack->size < 2 || !stack->head)
		return (true);
	to_move = stack->head;
	stack->head = stack->head->next;
	to_move->next = NULL;
	nodeadd_back(&stack->head, to_move);
}
