/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaria <rafaria@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:55:03 by rafaria           #+#    #+#             */
/*   Updated: 2023/11/08 16:03:10 by rafaria          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_tolower (int character )
{
	if (character >= 97 && character <= 122)
		character = character - 32;
	else
		return (character);
}

