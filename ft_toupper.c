/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaria <rafaria@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:43:15 by rafaria           #+#    #+#             */
/*   Updated: 2023/11/08 16:02:22 by rafaria          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int ft_toupper( int character )
{
	if (character >= 65 && character <= 90)
		character = character + 32;
	else
		return (character);
}