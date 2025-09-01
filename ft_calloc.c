/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haabu-sa <haabu-sa@amman.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 22:04:56 by haabu-sa          #+#    #+#             */
/*   Updated: 2025/08/26 19:10:14 by haabu-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*p;
	int		i;

	p = malloc(nmemb * size);
	i = 0;
	if (p == NULL)
		return (NULL);
	ft_memset((char *)(p + i), '\0', nmemb * size);
	return (p);
}
// int	main(void)
// {
// 	char *ptr = ft_calloc(10 ,sizeof(char));
// 	char	*ptr1 = calloc(10,sizeof(char));

// 	printf("%s\n",ptr1);
// 	printf("%s\n",ptr);

// 	free(ptr1);
// 	free(ptr);

// }
