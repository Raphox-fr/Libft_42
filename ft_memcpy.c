/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaria <rafaria@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:27:33 by rafaria           #+#    #+#             */
/*   Updated: 2023/11/08 15:32:26 by rafaria          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int main() {

//     int array [] = { 54, 85, 20, 62, 21 };
//     int * copy = NULL;
//     int length = sizeof( int ) * 5;
       
//     /* Memory allocation and copy */
//     copy = (int *) malloc( length );
//     ft_memcpy( copy, array, length );
// 	    printf( "\n" );
        
//     /* Display the copied values */
//     for( length=0; length<5; length++ ) {
//         printf( "%d ", copy[ length ] );
//     }
//     printf( "\n" );
        
//     free( copy );
    
//     return EXIT_SUCCESS;
// }