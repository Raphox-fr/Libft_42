/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaria <rafaria@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 10:35:40 by rafaria           #+#    #+#             */
/*   Updated: 2023/11/13 16:18:30 by rafaria          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void ft_putstr_fd(char *s, int fd)
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
	}
	return ;
	
}

				// int main()
				// {
				// 	char s[] = "bonjou comment ca va";
				// 	ft_putstr_fd(s, 1);
					
				// }