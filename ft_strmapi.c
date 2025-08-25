/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haabu-sa <haabu-sa@amman.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 15:50:38 by haabu-sa          #+#    #+#             */
/*   Updated: 2025/08/23 18:42:42 by haabu-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char uppper_f(unsigned int i, char c)
// {
// 	(void) i;
//    if (c >= 97 && c <= 122)
// 	{
// 		c = c - 32;
// 	}
//     return (c);
// }

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	if (!s)
		return (NULL);
	str = malloc(ft_strlen(s) + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
// int	main(void)
// {
// 	char *x = ft_strmapi("\0",uppper_f);
// 	printf("%s\n",x);
// 	free(x);
// }