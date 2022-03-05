/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   creat_staks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarrakis <jarrakis@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 01:56:25 by jarrakis          #+#    #+#             */
/*   Updated: 2022/03/05 02:16:18 by jarrakis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

t_node *newnode(int num)
{
    t_node  *elm;

    elm = ft_calloc(1, sizeof(t_node));
    if (elm == NULL)
        return (NULL);
    elm->num = num;
    elm->next = NULL;
    return (elm);
}

void    nodeadd_back(t_node **lst, t_node *new)
{
    t_node *tmp;

    tmp = *tmp;
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

void    creat_staks(char **argv, t_stacks *stacks)
{
    t_node  *new_node;

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