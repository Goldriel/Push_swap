#include "push_swap.h"

bool	push(t_stack* to, t_stack* from)
{
	t_node* to_move;

	if (from->size < 1 || !from->head)
		return (true);
	to_move = from->head;
	from->head = from->head->next;
	to_move->next = NULL;
	nodeadd_front(&to->head, to_move);
	to->size++;
	from->size--;
	return (true);
}