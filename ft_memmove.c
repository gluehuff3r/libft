/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haabu-sa <haabu-sa@amman.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 10:39:24 by haabu-sa          #+#    #+#             */
/*   Updated: 2025/08/25 17:54:08 by haabu-sa         ###   ########.fr       */
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

// int main(void)
// {
//     char str1[20] = "Hello, World!";
//     char str2[20] = "Hello, World!";

//     // Overlapping case
//     ft_memmove(str1 + 2, str1, 5);
//     memmove(str2 + 2, str2, 5);
//     printf("ft_memmove overlap: %s\n", str1);
//     printf("memmove    overlap: %s\n", str2);

//     // Non-overlapping case
//     char src[] = "42 Network";
//     char dst1[20];
//     char dst2[20];
//     ft_memmove(dst1, src, strlen(src) + 1);
//     memmove(dst2, src, strlen(src) + 1);
//     printf("ft_memmove copy   : %s\n", dst1);
//     printf("memmove    copy   : %s\n", dst2);

//     // NULL edge case (only your function, not the real one)
//     if (ft_memmove(NULL, NULL, 0) == NULL)
//         printf("ft_memmove NULL test (n=0): returned NULL safely\n");

//     return (0);
// }
