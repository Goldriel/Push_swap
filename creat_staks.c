/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   creat_staks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarrakis <jarrakis@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 01:56:25 by jarrakis          #+#    #+#             */
/*   Updated: 2022/03/25 19:37:07 by jarrakis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

t_node	*nodelast(t_node *lst)
{
	t_node	*last;

	if (!lst)
		return (NULL);
	last = lst;
	while (last->next)
		last = last->next;
	return (last);
}

t_node	*newnode(int num)
{
	t_node	*elm;

	elm = ft_calloc(1, sizeof(t_node));
	if (elm == NULL)
		return (NULL);
	elm->num = num;
	elm->next = NULL;
	return (elm);
}

void	nodeadd_back(t_node **lst, t_node *new)
{
	t_node	*tmp;

	tmp = *lst;
	if (new == NULL)
		return ;
	if (*lst == NULL)
		*lst = new;
	else
	{
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new;
	}
}

void	nodeadd_front(t_node **lst, t_node *new)
{
	if (!new)
		return ;
	if (*lst)
		new->next = *lst;
	*lst = new;
}

void	creat_staks(char **argv, t_stacks *stacks)
{
	t_node		*new_node;

	stacks->a = (t_stack){0};
	stacks->b = (t_stack){0};
	while (argv[stacks->a.size])
	{
		new_node = newnode(ft_atoi(argv[stacks->a.size]));
		if (new_node == NULL)
			exit_program(stacks);
		nodeadd_back(&stacks->a.head, new_node);
		(stacks->a.size)++;
	}
}
