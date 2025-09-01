/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haabu-sa <haabu-sa@amman.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 21:09:39 by haabu-sa          #+#    #+#             */
/*   Updated: 2025/08/26 19:01:50 by haabu-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
//     const char *big = "Hello, World!";
//     const char *lil = "World";
//     const char *lil2 = "Bye";

//     char *res1 = ft_strnstr(big, lil, 13);
//     char *res2 = strnstr(big, lil, 13);
//     printf("ft_strnstr: %s\n", res1);
//     printf("strnstr   : %s\n", res2);
// }
