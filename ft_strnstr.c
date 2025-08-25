/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haabu-sa <haabu-sa@amman.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 21:09:39 by haabu-sa          #+#    #+#             */
/*   Updated: 2025/08/25 17:54:36 by haabu-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/bsd.h>

char	*ft_strnstr(const char *big, const char *lil, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (lil[0] == '\0')
		return ((char *)big);
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i + j] == lil[j] && (i + j) < len)
		{
			j++;
			if (lil[j] == '\0')
				return ((char *)(big + i));
		}
		i++;
	}
	return (NULL);
}

// int main(void)
// {
//     const char *haystack = "Hello, World!";
//     const char *needle = "World";
//     const char *needle2 = "Bye";

//     // Normal case
//     char *res1 = ft_strnstr(haystack, needle, 13);
//     char *res2 = strnstr(haystack, needle, 13);
//     printf("ft_strnstr: %s\n", res1);
//     printf("strnstr   : %s\n", res2);

//     // Needle not found
//     res1 = ft_strnstr(haystack, needle2, 13);
//     res2 = strnstr(haystack, needle2, 13);
//     printf("ft_strnstr not found: %s\n", res1);
//     printf("strnstr not found   : %s\n", res2);

//     // n smaller than needle position
//     res1 = ft_strnstr(haystack, needle, 5);
//     res2 = strnstr(haystack, needle, 5);
//     printf("ft_strnstr n too small: %s\n", res1);
//     printf("strnstr n too small   : %s\n", res2);

//     // Empty needle (should return haystack)
//     res1 = ft_strnstr(haystack, "", 13);
//     res2 = strnstr(haystack, "", 13);
//     printf("ft_strnstr empty needle: %s\n", res1);
//     printf("strnstr empty needle   : %s\n", res2);

//     // NULL edge case is undefined for strnstr, so skip

//     return (0);
// }
