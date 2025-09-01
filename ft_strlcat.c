/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haabu-sa <haabu-sa@amman.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 13:23:41 by haabu-sa          #+#    #+#             */
/*   Updated: 2025/08/26 17:16:18 by haabu-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = 0;
	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	while (dst[dst_len] != '\0')
		dst_len++;
	if (size <= dst_len)
		return (size + src_len);
	i = dst_len;
	while (i < size - 1 && *src != '\0')
	{
		dst[i] = *src;
		i++;
		src++;
	}
	dst[i] = '\0';
	return (dst_len + src_len);
}
/*
int	main(void)
{
	char	x[30] = "what ";
	char	y[30] = "ever";
	char	z[30] = "what ";

	size_t s, i;
	i = strlcat(z, y, 10);
	s = ft_strlcat(x, y, 10);
	printf("%s", x);
	printf("%zu \n", s);
	printf("%s", z);
	printf("%zu", i);
}*/