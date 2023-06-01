/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raphox <raphox@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 12:57:39 by raphox            #+#    #+#             */
/*   Updated: 2023/05/31 16:36:06 by raphox           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char a, char b, char c)
{
	if (a == '0' && b == '1' && c == '2')
	{
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, &c, 1);
	}
	else
	{
		write (1, ", ", 2);
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, &c, 1);
	}
}

void	ft_print_comb(void)
{
	int		a;
	int		b;
	int		c;

	a = '0';
	b = '0';
	c = '0';
	while (a <= '7' )
	{
		while (b <= '8')
		{
			b = b + 1;
			c = b + 1;
			while (c <= '9')
			{
				ft_putchar(a, b, c);
				c = c + 1;
			}
		}
		b = a + 1;
		a = a + 1;
	}
	write (1, "\n", 1);
}

int	main(void)
{
	ft_print_comb();
	return (0);
}
