/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haabu-sa <haabu-sa@amman.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 16:22:55 by haabu-sa          #+#    #+#             */
/*   Updated: 2025/08/23 21:59:27 by haabu-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void uppper_f(unsigned int i, char *c)
// {
//    if (c[i] >= 97 && c[i] <= 122)
// 	{
// 		c[i] = c[i] - 32;
// 	}
//     //return (c[i]);
// }
// void my_fun(unsigned int i, char *c)
// {
//     *c = *c + i;
// }
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
// int	main(void)
// {
// 	char s[50] = "abcd0";
// 	ft_striteri(s,my_fun);
// 	printf("%s\n",s);
// 	//free(x);
// }