/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haabu-sa <haabu-sa@amman.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 17:52:39 by haabu-sa          #+#    #+#             */
/*   Updated: 2025/08/25 18:00:12 by haabu-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1tmp;
	unsigned char	*s2tmp;

	if (n == 0)
		return (0);
	s1tmp = (unsigned char *)s1;
	s2tmp = (unsigned char *)s2;
	i = 0;
	while (i < n - 1 && s1tmp[i] == s2tmp[i])
		i++;
	return (s1tmp[i] - s2tmp[i]);
}
