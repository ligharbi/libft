/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ligharbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 18:29:53 by ligharbi          #+#    #+#             */
/*   Updated: 2024/12/27 17:51:49 by ligharbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	n;
	size_t	i;
	size_t	k;

	n = ft_strlen(dst);
	k = ft_strlen((char *)src);
	i = 0;
	if (size <= n)
			return (k + n);
	while (i < size - n - 1 && src[i] != '\0')
	{
		dst[n + i] = src[i];
		i ++;
	}
	if (n + i < size)
		dst[n + i] = '\0';
	return (n + k);
}
