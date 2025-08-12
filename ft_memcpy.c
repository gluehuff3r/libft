/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haabu-sa <haabu-sa@amman.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 14:41:01 by haabu-sa          #+#    #+#             */
/*   Updated: 2025/08/11 19:53:06 by haabu-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && *(char *)src)
	{
		*(char *)dest++ = *(char *)src++;
	}
	return (dest);
}
/*
int	main(void)
{
	char str1[50];
	char str2[60];
	ft_memcpy(str2, str1, 999);
	printf("%s\n%s", str1, str2);
}*/