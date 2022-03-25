#include "push_swap.h"

bool	reverse_rotate(t_stack* stack)
{
	t_node* to_move;
	int		i;

	if (stack->size < 2 || !stack->head)
		return (true);
	i = 0;
	to_move = stack->head;
	while (((t_node*)(to_move->next))->next)
		to_move = to_move->next;
	((t_node*)(to_move->next))->next = stack->head;
	stack->head = to_move->next;
	to_move->next = NULL;
	return (true);
}