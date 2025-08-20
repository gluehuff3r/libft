/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haabu-sa <haabu-sa@amman.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 13:43:03 by haabu-sa          #+#    #+#             */
/*   Updated: 2025/08/20 19:56:16 by haabu-sa         ###   ########.fr       */
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

char **ft_split(char const *s, char c)
{
    size_t		word_count;
	char	**str;
	size_t		i;
	//size_t		j;
	char	*word;

	i = 0;
	//j = 0;
	word_count = word_counter(s, c);
	if (!s)
        return (NULL);
	str = malloc((word_count + 1) * sizeof(char	*));
	while(i < word_count)
	{
    	while (*s == c && *s)
        	s++;
	//printf("strlen = %zu\n", ft_strlen(word));

    	word = filler(s,c);
    	str[i] = word;
    	s += ft_strlen(word);
    	i++;
}
	str[i] = NULL;
	return (str);
}

int main(void)
{
    char **x;
    int i = 0;

    x = ft_split("////hello//////world///test////", '/');
    while (x[i])
    {
        printf("%s\n", x[i]);
        free(x[i]);
        i++;
    }
    free(x);
    return 0;
}