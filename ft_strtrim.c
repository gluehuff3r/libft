/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haabu-sa <haabu-sa@amman.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 22:20:42 by haabu-sa          #+#    #+#             */
/*   Updated: 2025/08/23 18:45:40 by haabu-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int	find_start(const char *s1, const char *set)
// {
// 	int	start;
// 	int	i;

// 	start = 0;
// 	while (s1[start])
// 	{
// 		i = 0;
// 		while (set[i])
// 		{
// 			if (s1[start] == set[i])
// 				break ;
// 			i++;
// 		}
// 		if (set[i] == '\0')
// 			break ;
// 		start++;
// 	}
// 	return (start);
// }

// int	find_end(const char *s1, const char *set)
// {
// 	int	end;
// 	int	i;

// 	end = ft_strlen(s1) - 1;
// 	while (end >= 0)
// 	{
// 		i = 0;
// 		while (set[i])
// 		{
// 			if (s1[end] == set[i])
// 				break ;
// 			i++;
// 		}
// 		if (set[i] == '\0')
// 			break ;
// 		end--;
// 	}
// 	return (end);
// }

// char	*ft_strtrim(char const *s1, char const *set)
// {
// 	int		start;
// 	int		end;
// 	int		j;
// 	char	*str;

// 	if (!s1 || !set)
// 		return (NULL);
// 	start = find_start(s1, set);
// 	end = find_end(s1, set);
// 	printf("s1 = %zu\nend = %i\nstart = %i\n", ft_strlen(s1), end, start);
// 	str = malloc(ft_strlen(s1)-);
// 	if (!str)
// 		return (NULL);
// 	j = 0;
// 	while (start <= end)
// 		str[j++] = s1[start++];
// 	str[j] = '\0';
// 	return (str);
// }

// char	*ft_strtrim(char const *s1, char const *set)
// {
// 	char	*trimmed;
// 	size_t	start;
// 	size_t	end;

// 	if (!s1)
// 		return (NULL);
// 	if (!set)
// 		return (ft_strdup(s1));
// 	end = ft_strlen(s1) - 1;
// 	start = 0;
// 	while (s1[start] && ft_strchr(set, s1[start]))
// 		start++;
// 	while (s1[end] && ft_strchr(set, s1[end]))
// 		end--;
// 	trimmed = ft_substr(s1, start, end - start + 1);
// 	return (trimmed);
// }

int	find_start(const char *s1, const char *set)
{
	int	start;
	int	i;

	start = 0;
	while (s1[start])
	{
		i = 0;
		while (set[i])
		{
			if (s1[start] == set[i])
				break ;
			i++;
		}
		if (set[i] == '\0')
			break ;
		start++;
	}
	return (start);
}

int	find_end(const char *s1, const char *set)
{
	int	end;
	int	i;

	end = ft_strlen(s1) - 1;
	while (end >= 0)
	{
		i = 0;
		while (set[i])
		{
			if (s1[end] == set[i])
				break ;
			i++;
		}
		if (set[i] == '\0')
			break ;
		end--;
	}
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		j;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	start = find_start(s1, set);
	end = find_end(s1, set);
	if (start > end)
		return (strdup(""));
	str = malloc(end - start + 2);
	if (!str)
		return (NULL);
	j = 0;
	while (start <= end)
		str[j++] = s1[start++];
	str[j] = '\0';
	return (str);
}

// int main(void)
// {
//     char *s1 = "abckjdcba1";
//     char *set = "abc";
//     char *x = ft_strtrim(s1, set);
//     printf("%s\n", x);
//     free(x);
// }