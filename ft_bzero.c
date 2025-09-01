/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haabu-sa <haabu-sa@amman.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 13:57:29 by haabu-sa          #+#    #+#             */
/*   Updated: 2025/08/26 17:09:33 by haabu-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*(char *)s++ = '\0';
		i++;
	}
}
/*int	main(void)
{
	char	str1[50] = "ahah";

	ft_bzero(str1, 4);
	printf("%s", str1);
	// printf("%s", bzero(str1, 4));
}*/