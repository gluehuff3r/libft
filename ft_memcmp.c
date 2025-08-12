/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haabu-sa <haabu-sa@amman.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 19:28:54 by haabu-sa          #+#    #+#             */
/*   Updated: 2025/08/12 17:38:17 by haabu-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (*(unsigned char *)(s1 + i) == *(unsigned char *)(s2 + i) && i < n
		- 1)
	{
		if (*(unsigned char *)(s1 + 1) == '\0')
		{
			return (0);
		}
		i++;
	}
	return (*(unsigned char *)(s1 + i) - *(unsigned char *)(s2 + i));
}
/*int	main(void)
{
	char c[] = "zaza";
	char ch[] = "zaza";
	int i = ft_memcmp(c, ch, 3);
	int ii = memcmp(c, ch, 3);
	printf("%d\n%d", i, ii);
}*/