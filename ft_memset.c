/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haabu-sa <haabu-sa@amman.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 11:02:35 by haabu-sa          #+#    #+#             */
/*   Updated: 2025/08/25 17:45:52 by haabu-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#include <string.h>
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

//     // Set first 5 chars to 'A'
//     ft_memset(str1, 'A', 5);
//     memset(str2, 'A', 5);
//     printf("ft_memset: %s\n", str1);
//     printf("memset   : %s\n", str2);

//     // Set all 0 bytes
//     char buf1[10];
//     char buf2[10];
//     ft_memset(buf1, 0, sizeof(buf1));
//     memset(buf2, 0, sizeof(buf2));
//     printf("ft_memset null bytes: ");
//     for (int i = 0; i < 10; i++)
//         printf("%d ", buf1[i]);
//     printf("\n");

//     // NULL edge case (only n = 0 is safe)
//     ft_memset(NULL, 'X', 0);
//     printf("ft_memset NULL test (n=0) -> no crash\n");

//     return (0);
// }
