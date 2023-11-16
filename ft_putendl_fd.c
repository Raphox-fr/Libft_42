/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaria <rafaria@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 11:00:43 by rafaria           #+#    #+#             */
/*   Updated: 2023/11/13 11:14:33 by rafaria          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void ft_putend_fd(char *s, int fd)
{
	int i;
	i = 0;
	if (s)
	{
		while (s[i])
		{
			write(fd, &s[i], 1);
			i++;
		}
		write(1, "\n", 1);
		
	}
	return ;
	
}

int main()
{
	char s[] = "bonjou comment ca va";
	ft_putend_fd(s, 1);
}