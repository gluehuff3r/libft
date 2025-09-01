/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haabu-sa <haabu-sa@amman.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 10:39:24 by haabu-sa          #+#    #+#             */
/*   Updated: 2025/09/01 19:37:23 by haabu-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	i = 0;
	if (d < s)
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	else if (d > s)
	{
		i = n;
		while (i > 0)
		{
			i--;
			d[i] = s[i];
		}
	}
	return (dest);
}

// int	main(void)
// {
// 	 char	str1[20] = "Hello, World!";
// 	 char	str2[20] = "Hello, World!";
// 	 char	str11[20] = "Hello, World!";
// 	 char	str22[20] = "Hello, World!";

// 	 char *x = ft_memmove(NULL, NULL, 5);
// 	 char *y	= memmove(NULL, NULL, 5);
// 	 printf("%s\n",x);
// 	printf("%s\n", y);
//}
