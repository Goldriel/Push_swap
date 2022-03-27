/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarrakis <jarrakis@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 18:35:58 by jarrakis          #+#    #+#             */
/*   Updated: 2022/03/27 18:40:08 by jarrakis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	swap(t_stack *stack)
{
	t_node	tmp;
	t_node	*node;
	t_node	*node_next;

	if (stack < 2 || !(stack->head) || !((t_node *)(stack->head)->next))
		return (true);
	node = stack->head;
	node_next = stack->head->next;
	tmp.num = node->num;
	tmp.index = node->index;
	tmp.keep = node->keep;
	node->num = node_next->num;
	node->index = node_next->index;
	node->keep = node_next->keep;
	node_next->num = tmp.num;
	node_next->index = tmp.index;
	node_next->keep = tmp.keep;
	return (true);
}
