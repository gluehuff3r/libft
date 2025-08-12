/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haabu-sa <haabu-sa@amman.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 02:25:57 by haabu-sa          #+#    #+#             */
/*   Updated: 2025/08/10 02:38:45 by haabu-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && i < n - 1)
	{
		if (s1[i] == '\0')
		{
			return (0);
		}
		i++;
	}
	return ((unsigned char)(s1[i]) - (unsigned char)(s2[i]));
}

/*int	main(void)
{
	char	c[] = "$'\201'";
	char	ch[] = "A";
	int		i = ft_strncmp(c, ch, 3);
	int		ii = strncmp(c,ch,3);
	printf("%d\n%d", i,ii);
}*/
