/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haabu-sa <haabu-sa@amman.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 09:03:42 by haabu-sa          #+#    #+#             */
/*   Updated: 2025/08/16 14:31:21 by haabu-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

//#include <string.h>
size_t	ft_strlen(const char *s)
{
	int	l;

	l = 0;
	while (s[l])
		l++;
	return (l);
}
/*
int	main(void)
{
	printf("%zu",ft_strlen("whatever"));
	printf("%zu",strlen("whatever"));
}
*/
