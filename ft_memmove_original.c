/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccasadem <ccasadem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 18:43:41 by ccasadem          #+#    #+#             */
/*   Updated: 2022/09/27 18:43:41 by ccasadem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

void    *ft_memmove(void *dst, const void *src, size_t n)
{
  char *str = src;
  char *desti = (char *)dst;
  size_t i;
  
  i = n;
  if (desti - str < 0)
  {
    ft_memcpy(desti, str, n);
  }
  while(n--)
  {
    *(desti + n -1) = *(str + n -1);
  }
  return ((char *)desti);
}
int main()
{
  char word[20] = "0123456789abcdefghi";
  char word1[20] ="0123456789abcdefghi";

  printf("string:%s\n", ft_memmove(word + 2, word, 12));
  printf("string:%s\n", memmove(word1 + 2, word1 ,12));
}