/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haabu-sa <haabu-sa@amman.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 21:09:39 by haabu-sa          #+#    #+#             */
/*   Updated: 2025/08/11 19:50:50 by haabu-sa         ###   ########.fr       */
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
/*int	main(void)
{
	char	b[50] = "hello";
	char	l[50] = "ll";
	char	*x;
	char	bb[50] = "hello";
	char	ll[50] = "ll";
	char	*z;

	x = ft_strnstr(b, l, 4);
	z = strnstr(bb, ll, 4);
	printf("%s\n%s", x, z);
}*/
