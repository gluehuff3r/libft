/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haabu-sa <haabu-sa@amman.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 13:43:03 by haabu-sa          #+#    #+#             */
/*   Updated: 2025/08/26 20:47:24 by haabu-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_counter(char const *s, char c)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			counter++;
		i++;
	}
	if (s[0] == c || s[0] == '\0')
		return (counter);
	return (counter + 1);
}

static char	*filler(char const *s, char c)
{
	int		i;
	int		len;
	char	*word;

	i = 0;
	while (s[i] == c && s[i])
		i++;
	len = 0;
	while (s[i + len] && s[i + len] != c)
		len++;
	word = malloc(len + 1);
	if (!word)
		return (NULL);
	len = 0;
	while (s[i] && s[i] != c)
	{
		word[len] = s[i];
		i++;
		len++;
	}
	word[len] = '\0';
	return (word);
}

static char	**free_double_pointer(char **str, int i)
{
	while (i-- > 0)
		free(str[i]);
	free(str);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	size_t	word_count;
	char	**str;
	size_t	i;
	char	*word;

	if (!s)
		return (NULL);
	i = 0;
	word_count = word_counter(s, c);
	str = malloc((word_count + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	while (i < word_count)
	{
		while (*s == c && *s)
			s++;
		word = filler(s, c);
		if (!word)
			return (free_double_pointer(str, i));
		str[i] = word;
		s += ft_strlen(word);
		i++;
	}
	str[i] = NULL;
	return (str);
}

// int main(void)
// {
//     char **res;
//     int i;
//     res = ft_split("Hello world this is C", ' ');
// 	if (res != NULL)
//     {
// 		for (i = 0; res[i]; i++)
//         	printf("%d%s\n", i, res[i]);
// 	}
// 	for (i = 0; res[i]; i++)
//     {
// 		free(res[i]);
// 	}
// 	free(res);

// }
