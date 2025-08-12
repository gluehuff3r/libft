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
	while (n)
	{
		n--;
		*(unsigned char *)(dest + n) = *(unsigned char *)(src + n);
	}
	return (dest);
}
/*
int	main(void)
{
	char str1[59] = "whatever";
	char str2[50] = "whatever";

	printf("%s\n%s", str1,str2);


}*/
