/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaria <rafaria@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 16:46:45 by raphox            #+#    #+#             */
/*   Updated: 2023/11/22 20:39:49 by rafaria          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <strings.h>
# include <unistd.h>

int ft_countwords(const char *str, char set)
{
	int i;
	int count;
	
	count = 0;
	i = 1;
	// if (!str[0])
	// 	return (0);
	while(str[i])
	{
		if (str[i] == set && str[i - 1] != set)
			count++;
		i++;
	}
	if (str[i - 1] != set)
		count++;
	printf("%d\n",count);
	
	return (count);
}

char	*ft_strempli(const char *s, char set)
{
	int		i;
	int		countstr;
	char	*dest;

	i = 0;
	countstr = ft_strlen(s);
	dest = malloc((sizeof(char)) * (countstr + 1));
	if (dest == NULL)
		return (NULL);
	while (s[i] != set)
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}


char **ft_fill(char **tab, int countwords, char *s, char set)
{
	int mot;
	int start;

	mot = 0;
	start = 0;

	while(mot < countwords)
	{
		tab[mot] = ft_strempli(s[start], set, );
		start = start + ft_strlen(tab[mot]);
		while (s[start] == set)
			start++;
		mot++;
	}
	return(tab);
}

char **ft_split(char const *s, char c)
{
	char **tab;
	int countwords;
	countwords = ft_countwords(s, c);
	tab = malloc(sizeof(char *) * (countwords + 1));
	if (tab == NULL)
		return (NULL);
	tab[countwords] = 0;
	tab = ft_fill(tab, countwords, s, c);
	return (tab);
}

int		main(void)
{
	char **tab;
	tab = ft_split("bonjour comment ca va", ' ');
}