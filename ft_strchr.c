/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haabu-sa <haabu-sa@amman.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 17:27:42 by haabu-sa          #+#    #+#             */
/*   Updated: 2025/08/09 23:47:30 by haabu-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (c == s[i])
			return ((char *)(s + i));
		i++;
	}
	return (NULL);
}
/*int main()
{
	char s[50] = "h124ashaenhad ebnha";
	int i = 'e';
	char ss[50] = "h124ashaenhad ebnha";
	int ii = 'e';
	char *x = ft_strchr(s , i);
	char  *z = strchr(ss,ii);
	printf("%s\n" , x);
	printf("%s" , z);


}*/