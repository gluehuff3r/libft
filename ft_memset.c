/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haabu-sa <haabu-sa@amman.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 11:02:35 by haabu-sa          #+#    #+#             */
/*   Updated: 2025/08/26 20:46:27 by haabu-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;

	p = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		p[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

// int main(void)
// {
//     char str1[20] = "Hello, World!";
//     char str2[20] = "Hello, World!";

//     ft_memset(str1, 'A', 5);
//     memset(str2, 'A', 5);
//     printf("%s\n", str1);
//     printf("%s\n", str2);

//     return (0);

// }
