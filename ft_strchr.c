/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haabu-sa <haabu-sa@amman.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 17:27:42 by haabu-sa          #+#    #+#             */
/*   Updated: 2025/08/25 17:10:37 by haabu-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int				i;
	unsigned char	ch;

	i = 0;
	ch = (unsigned char)c;
	while (s[i])
	{
		if (ch == s[i])
			return ((char *)(s + i));
		i++;
	}
	if (ch == '\0' && s[i] == '\0')
		return ((char *)(s + i));
	return (NULL);
}

// int main()
// {
// 	// char *s = "h124ashaen\0hadebnha";
// 	// int i = '\0';
// 	// 	char *ss = "h124ashaen\00hadebnha";
// 	// 	int ii = '\0';
// 	char *x = ft_strchr("\0" , 0);
// 		char  *z = strchr("\0",0);
// 	printf("%s\n" , x);
// 	printf("%s\n" , z);

// }