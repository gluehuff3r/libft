/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haabu-sa <haabu-sa@amman.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 11:02:35 by haabu-sa          #+#    #+#             */
/*   Updated: 2025/08/12 21:42:20 by haabu-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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

/*int	main(void)
{
	char str1[50] = "abooddddddd";
	char str2[50] = "abooddddddd";
	ft_memset(str1, '.', 0);
	//memset(str2, '.', 0);
	printf("%s\n%s", str1, str2);
}*/
