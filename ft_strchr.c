/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haabu-sa <haabu-sa@amman.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 17:27:42 by haabu-sa          #+#    #+#             */
/*   Updated: 2025/08/26 18:14:16 by haabu-sa         ###   ########.fr       */
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
// 	char *s = "zaza";
// 	int i = 'a';
// 		char *ss = "zaza";
// 		int ii = 'a';
// 	char *x = ft_strchr(s, i);
// 		char  *z = strchr(ss,ii);
// 	printf("%s\n" , x);
// 	printf("%s\n" , z);

// }