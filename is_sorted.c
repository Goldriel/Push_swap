
#include "push_swap.h"

static bool	sorted_stack(t_stack* stack)
{
	t_node* tmp;

	if (!stack || !stack->head)
		return (false);
	tmp = stack->head;
	while (tmp->next)
	{
		if (tmp->num > ((t_node*)(tmp->next))->num)
			return (false);
		tmp = tmp->next;
	}
	return (true);
}

static bool	empty_stack(t_stack *stack)
{
	if (stack->size == 0 && !stack->head)
		return (true);
	return (false);
}

bool	is_sorted(t_stacks* stacks)
{
	if (sorted_stack(&stacks->a) && empty_stack(&stacks->b))
		return (true);
	return (false);
}