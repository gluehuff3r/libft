/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haabu-sa <haabu-sa@amman.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 13:48:31 by haabu-sa          #+#    #+#             */
/*   Updated: 2025/08/16 14:28:23 by haabu-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;

	src_len = ft_strlen((char *)src);
	if (size == 0)
		return (src_len);
	i = 0;
	while (src[i] && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_len);
}

/*int	main(void)
{
	char	dst1[30] = "what ";
	char	y[30] = "e";
	char	dst2[30] = "what ";
	char	y1[30] = "e";
	size_t	s;
	size_t	i;

	s = ft_strlcpy(dst1, y, -1);
	i = strlcpy(dst2, y1, -1);
	printf("%s", dst1); // ft
	printf("%zu \n", s);
	printf("%s", dst2); //.h
	printf("%zu", i);
}*/
