/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haabu-sa <haabu-sa@amman.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 14:41:00 by haabu-sa          #+#    #+#             */
/*   Updated: 2025/08/26 19:08:52 by haabu-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub_str;
	unsigned int	i;
	size_t			j;
	unsigned int	slen;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	slen = ft_strlen(s + start);
	if (len > slen)
		len = slen;
	sub_str = malloc(len + 1);
	if (!sub_str)
		return (NULL);
	i = start;
	j = 0;
	while (j < len && s[i])
	{
		sub_str[j] = s[i];
		i++;
		j++;
	}
	sub_str[j] = '\0';
	return (sub_str);
}

// int main(void)
// {
//     char *res;

//     res = ft_substr("Hello, World!", 15, 5);
//     printf("%s\n", res); // Expected: World
//     free(res);
// }
