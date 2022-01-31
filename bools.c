#include "push_swap.h"

bool	contains_smaller(t_stack *s, int max)
{
	int	i;

	i = 0;
	while(i < s->count)
	{
		if(s->numbers[i] <= max)
			return (true);
		i++;
	}
	return (false);
}

bool	front_b_is_next(t_stacks *s)
{
	return(front(&s->b) == 0 || front(&s->b) == back(&s->a) + 1);  
}

bool	front_a_is_next(t_stacks *s)
{
	return (front(&s->a) == 0 || front(&s->a) == back(&s->a) + 1);
}

bool	should_sort_b(t_stacks *s)
{
	return (stack_min(&s->b) == back(&s->a) + 1);
}