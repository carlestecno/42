/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc_propi,c.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccasadem <ccasadem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 09:35:30 by ccasadem          #+#    #+#             */
/*   Updated: 2022/10/09 09:35:30 by ccasadem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void ft_split(char const *str, char c)
{
	int i;
	
	i = 0;
	while (*str)
	{
		if(*str == c)
		{
			i++;
		}
		str++;
	}
	printf("i : %i", i);
}
int main()
{
	ft_split("abdabd", 'd');
}
