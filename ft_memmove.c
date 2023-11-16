/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaria <rafaria@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:31:44 by rafaria           #+#    #+#             */
/*   Updated: 2023/11/09 14:10:24 by rafaria          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
void * ft_memcpy(void * destination, const void * source, size_t size )
{
    int    i;
    int be;

    char *dest;
    dest = destination;
    const char *src;
    src = source;

    i = 0;
    while (i < size)
    {
        dest[i] = src[i];
        i++;
    }
    return (destination);
}

void * ft_memmove( void * destination, const void * source, size_t size )
{
    char *dest;
    dest = destination;

    const char *src;
    src = source;

    int i;
    i = 0;

    int bee;
    bee = 0;

    if (dest == 0 || src == 0)
        return (dest);

    if (src == dest)
      return (dest);
    if (src > dest)
    {
        dest = ft_memcpy(dest, src, size);
    }
    else
    {
        while (size > 0)
            {
                size--;
                dest[size] = src[size];
            }
        return (dest);
	}
}




// #include <memory.h>
// #include <string.h>
// #include <stdio.h>

// char str1[7] = "aabbcc";
// char str2[7] = "zzzzzz";

// int main(void)
// {
//    printf( "The string: %s\n", str1 );
//    ft_memmove( str1 + 2, str1 + 1, 4 );
//    printf( "New string: %s\n", str1 );
   
// }