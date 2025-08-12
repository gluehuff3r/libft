/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haabu-sa <haabu-sa@amman.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 01:16:50 by haabu-sa          #+#    #+#             */
/*   Updated: 2025/08/12 21:46:09 by haabu-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	slen;
	int	i;

	slen = ft_strlen((char *)s);
	i = 0;
	while (slen >= 0)
	{
		if ((unsigned char)c == s[slen])
			return ((char *)(s + slen));
		slen--;
	}
	return (NULL);
}
/*int main()
{
	char s[50] = "zaza";
	int i = 'z';
	char ss[50] = "zaza";
	int ii = 'z';
	char *x = ft_strrchr(s , i);
	char  *z = strrchr(ss,ii);
	printf("%s\n" , x);
	printf("%s" , z);


}*/