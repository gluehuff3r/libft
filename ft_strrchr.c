/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haabu-sa <haabu-sa@amman.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 01:16:50 by haabu-sa          #+#    #+#             */
/*   Updated: 2025/08/26 18:23:12 by haabu-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	slen;

	slen = ft_strlen(s);
	while (slen >= 0)
	{
		if ((unsigned char)c == s[slen])
			return ((char *)(s + slen));
		slen--;
	}
	return (NULL);
}
// int main()
// {
// 	char s[50] = "hello";
// 	int i = 'o';
// 	char ss[50] = "hello";
// 	int ii = 'o';
// 	char *x = ft_strrchr(s , i);
// 	char  *z = strrchr(ss,ii);
// 	printf("%s\n" , x);
// 	printf("%s" , z);

// }