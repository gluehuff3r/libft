/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haabu-sa <haabu-sa@amman.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 13:43:03 by haabu-sa          #+#    #+#             */
/*   Updated: 2025/08/25 18:53:44 by haabu-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	word_counter(char const *s, char c)
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

char	*filler(char const *s, char c)
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

char	**free_double_pointer(char **str, int i)
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

//     // Normal split by space
//     res = ft_split("Hello world this is C", ' ');
// 	if (res != NULL)
//     {
// 		printf("Normal split:\n");
// 		for (i = 0; res[i]; i++)
//         	printf("[%d]: %s\n", i, res[i]);
// 	}
// 	else
// 	{
// 		printf("Split return NULL\n");
// 	}
// 	// for (i = 0; res[i]; i++)
//     // {
// 	// 	free(res[i]);
// 	// }
// 	// free(res);
//     // // Multiple consecutive delimiters
//     // res = ft_split("Hello  world   test", ' ');
//     // printf("\nMultiple spaces:\n");
//     // for (i = 0; res[i]; i++)
//     //     printf("[%d]: %s\n", i, res[i]);

//     // // String starts/ends with delimiter
//     // res = ft_split("  Start and end  ", ' ');
//     // printf("\nStart/end spaces:\n");
//     // for (i = 0; res[i]; i++)
//     //     printf("[%d]: %s\n", i, res[i]);

//     // // Empty string
//     // res = ft_split("", ' ');
//     // printf("\nEmpty string:\n");
//     // if (!res[0])
//     //     printf("No tokens\n");

//     // // Only delimiters
//     // res = ft_split("     ", ' ');
//     // printf("\nOnly delimiters:\n");
//     // if (!res[0])
//     //     printf("No tokens\n");

//     return (0);
// }
