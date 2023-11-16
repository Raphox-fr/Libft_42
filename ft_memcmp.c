/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaria <rafaria@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 18:02:52 by rafaria           #+#    #+#             */
/*   Updated: 2023/11/09 18:23:10 by rafaria          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stddef.h>
int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    int i;
    i = 0;
    
    unsigned char *sup1;
    unsigned char *sup2;

    sup1 = (unsigned char *)s1;
    sup2 = (unsigned char *)s2;
    int diff;
    diff = 0;

    while(sup1[i] != '\0' && sup2[i] != '\0' && i < n)
    {
        diff = sup1[i] - sup2[i];
        if (diff != 0)
            return (diff);
        i++;
    }
    return (0);
    
}

// #include <stddef.h>
// #include<stdio.h>
// #include<string.h>

// int main()
// {
//     char string1[] = {10, 20, 30, -41};
//     char string2[] = {10, 20, 30, -40};
//     size_t bee = 100;

//     printf("%d",(ft_memcmp(string1, string2, bee)));
// 	printf("\n");
// 	printf("%d",(memcmp(string1, string2, bee)));
// }