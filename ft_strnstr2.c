/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaria <rafaria@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 17:15:57 by rafaria           #+#    #+#             */
/*   Updated: 2023/11/17 17:19:48 by rafaria          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
#include <bsd/string.h>
#include <stdio.h>


int	main(void)
{
	const char	*s1 = "bonjour comment ca va";
	const char	*s2 = "comment";
	size_t res = 4;

	printf("%s", strnstr(s1, s2, res));
	printf("\n");
}
