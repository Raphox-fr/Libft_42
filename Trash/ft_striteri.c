/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raphox <raphox@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 16:37:28 by raphox            #+#    #+#             */
/*   Updated: 2023/11/14 17:03:19 by raphox           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i = i + 1;
	}
	return (i);
}

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int		i;
	int		i2;

	i = 0;
	i2 = 0;
	if (s != NULL && f != NULL)
	{
		i = ft_strlen(s);
		while (i2 < i)
		{
			(*f)(i2, s);
			s++;
			i2++;
		}
	}
}

void iter(unsigned int i, char * s) {
	*s += i;
}

#include<stdlib.h>
#include<unistd.h>
int main(void)
{

		char s[] = "12";
		printf()ft_striteri(s, iter);

	write(1, "\n", 1);
	return (0);
}