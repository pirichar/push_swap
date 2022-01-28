#include "push_swap.h"

int		find_number(t_stack *s, int n)
{
	int	i;

	i = 0;
	while (i < s->count)
	{
		if (s->numbers[i] == n)
			return (i);
		i++;
	}
	return (-1);
}

int		average(t_stack *s)
{
	int	i;
	int	sum;

	i = 0;
	sum = 0;
	while(i < s->count)
	{
		sum += s->numbers[i];
		i++;
	}
	return ((float)(sum) / (int)(s->count + 0.5f));
}

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

int		front(t_stack *s)
{
	return (s->numbers[s->count - 1]);
}

int		back(t_stack *s)
{
	return (s->numbers[0]);
}

void	split_a_lower(t_stacks *s, int mid)
{
	while (contains_smaller(&s->a, mid))
	{
		while (front(&s->a) > mid)
			ra(s);
		pb(s);
	}
}

int		stack_max(t_stack *s)
{
	int	i;
	int	max;

	max = back(s);
	i = 1;
	while(i < s->count)
	{
		if (max < s->numbers[i])
			max = s->numbers[i];
		i++;
	}
	return (max);
}

int		stack_min(t_stack *s)
{
	int	i;
	int	min;

	min = back(s);
	i = 1;
	while(i < s->count)
	{
		if (min > s->numbers[i])
			min = s->numbers[i];
		i++;
	}
	return (min);
}

//Ok je comprend pas le return de celle -la wtf 
static	bool	front_b_is_next(t_stacks *s)
{
	return(front(&s->b) == 0 || front(&s->b) == back(&s->a) + 1);  
}

static	void	max_to_front(t_stacks *s)
{
	int	i;
	int	max;

	max = stack_max(&s->b);
	if (front(&s->b) == max)
	{
		pa(s);
		return ;
	}
	i = find_number(&s->b, max);
	if (i < s->b.count / 2)
		rrb(s);
	else
		rb(s);
}

// pk le hard code de 13 
//je comprend mal ce que fait max_to_front
void	split_b_higher(t_stacks *s, int mid)
{
	int	count;

	count = s->b.count;
	while (count-- > 0)
	{
		if (front_b_is_next(s))
		{
			pa(s);
			ra(s);
		}
		else if (s->b.count < 13)
			max_to_front(s);
		else if (mid <= front(&s->b))
			pa(s);
		else
			rb(s);
	}
}

//comprend pas le return 
static	bool	front_a_is_next(t_stacks *s)
{
	return (front(&s->a) == 0 || front(&s->a) == back(&s->a) + 1);
}

static	bool	should_sort_b(t_stacks *s)
{
	return (stack_min(&s->b) == back(&s->a) + 1);
}

static	void	push_a_top(t_stacks *s, int max)
{
	while (front(&s->a) <= max && front(&s->a) != 0)
	{
		if (front_a_is_next(s))
			ra(s);
		else
			pb(s);
	}
	if (should_sort_b(s))
		sort_b(s);
}

void	sort_b(t_stacks *s)
{
	int	b_max;
	
	if (s->b.count == 0)
		return ;
	b_max = stack_max(&s->b);
	split_b_higher(s, average(&s->b));
	while (front_a_is_next(s) && front(&s->a) != 0) // probleme ici et je ne comprend pas pk il verifie le NULL ?
		ra(s);
	sort_b(s);
	push_a_top(s, b_max);
 }

void	sort_big(t_stacks *s)
{
	int	mid;

	if(is_in_order(&s->a))
		return ;
	mid = average(&s->a);
	split_a_lower(s, mid);
	sort_b(s);
	push_a_top(s, stack_max(&s->a));
}
