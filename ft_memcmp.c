/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haabu-sa <haabu-sa@amman.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 17:52:39 by haabu-sa          #+#    #+#             */
/*   Updated: 2025/08/26 18:39:17 by haabu-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*ss1;
	unsigned char	*ss2;

	if (n == 0)
		return (0);
	ss1 = (unsigned char *)s1;
	ss2 = (unsigned char *)s2;
	i = 0;
	while (i < n - 1 && ss1[i] == ss2[i])
		i++;
	return (ss1[i] - ss2[i]);
}
// int	main(void)
// {
// 	char s[50] = "ags";
// 	char d[60] = "\0";
// 	char s1[50] = "ag";
// 	char d1[60] = "\0";
// 	int x = ft_memcmp(d, s, 1);
// 	int y = memcmp(d1,s1,1);
// 	printf("%d\n%d",x,y);
// }