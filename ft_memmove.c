/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haabu-sa <haabu-sa@amman.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 10:39:24 by haabu-sa          #+#    #+#             */
/*   Updated: 2025/08/12 22:06:20 by haabu-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
    i = 0;
	if (d < s) // copy forwards
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	else if (d > s) // backward
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
/*int	main(void)
{
	char a1[20] = "abcdef";
	char a2[20] = "abcdef";


	ft_memmove(a1, a1 + 2, 3); 
	memmove(a2, a2 + 2, 3);
	printf("%s\n%S", a1, a2);
}*/
