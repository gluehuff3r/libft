/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haabu-sa <haabu-sa@amman.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 13:48:31 by haabu-sa          #+#    #+#             */
/*   Updated: 2025/08/12 22:03:11 by haabu-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (size == 0)
		return (i);
	if (size > 0)
	{
		while (src && (i < size - 1))
		{
			dst[j] = src[i];
			i++;
			j++;
		}
		dst[j] = 0;
	}
	i = 0;
	while (src[i])
	{
		i++;
	}
	return (i);
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
