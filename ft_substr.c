/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haabu-sa <haabu-sa@amman.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 14:41:00 by haabu-sa          #+#    #+#             */
/*   Updated: 2025/08/25 17:50:28 by haabu-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

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

//     // Normal case
//     res = ft_substr("Hello, World!", 7, 5);
//     printf("Normal: %s\n", res); // Expected: World
//     free(res);

//     // start beyond string length
//     res = ft_substr("Hello", 10, 5);
//     printf("Start beyond length: %s\n", res); // Expected: empty string
//     free(res);

//     // len bigger than remaining string
//     res = ft_substr("Hello", 2, 10);
//     printf("Len bigger than remaining: %s\n", res); // Expected: llo
//     free(res);

//     // len = 0
//     res = ft_substr("Hello", 2, 0);
//     printf("Len 0: %s\n", res); // Expected: empty string
//     free(res);

//     // start = 0, len = full string
//     res = ft_substr("Hello", 0, 5);
//     printf("Full string: %s\n", res); // Expected: Hello
//     free(res);

//     return (0);
// }
