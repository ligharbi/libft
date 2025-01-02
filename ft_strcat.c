/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ligharbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 18:29:53 by ligharbi          #+#    #+#             */
/*   Updated: 2024/12/18 18:12:37 by ligharbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	n;

	n = 0;
	if (size == 0)
		return (n);
	while (*dst != '\0')
	{
		dst ++;
		n ++;
	}
	while (size > 0 && *src != '\0')
	{
		*dst = *src;
		dst ++;
		src ++;
		size --;
		n ++;
	}
	*dst = '\0';
	return (n);
}
