/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haabu-sa <haabu-sa@amman.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 18:13:14 by haabu-sa          #+#    #+#             */
/*   Updated: 2025/08/12 21:11:24 by haabu-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int	i;

	i = 0;
	while (n)
	{
		if ((unsigned char)c == *(unsigned char *)(s + i))
			return ((unsigned char *)(s + i));
		i++;
		n--;
	}
	return (NULL);
}
/*int main()
{
	char s[50] = "aza";
	size_t i = 'z';
	char ss[50] = "aza";
	size_t ii = 'z';
	char *x = ft_memchr(s , i, 4);
	char  *z = memchr(ss,ii, 4);
	printf("%s\n" , x);
	printf("%s" , z);
}*/