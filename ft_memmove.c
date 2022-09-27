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
    char *str_dst;
    const char *str_src;

    str_dst = dst;
    str_src = (char*)src;
    if (str_dst > str_src)
    {
      while (n-- >0)
      {
        str_dst[n] = str_src[n];
      }
    }
    else
    {
      while(n--)
      {
        *str_dst++ = *str_src++;
      }
    }
    return (dst);
}