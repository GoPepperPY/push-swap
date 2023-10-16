#include "../includes/ft_printf.h"

int	checker(char *arguments)
{
	int	counter_one;
	int counter_two;

	counter_one = 0;
	while (arguments[counter_one])
	{
		counter_two = 0;
		while (arguments)
		{
			if (arguments[counter_one] == arguments[counter_two])
				return (0);
			counter_two++;
		}
		counter_one++;
	}
	return (1);
}