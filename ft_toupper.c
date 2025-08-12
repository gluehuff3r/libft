/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haabu-sa <haabu-sa@amman.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 16:19:52 by haabu-sa          #+#    #+#             */
/*   Updated: 2025/08/09 19:26:31 by haabu-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <ctype.h>
//#include <stdio.h>
//#include <string.h>
int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		c = c - 32;
	}
	return (c);
}

/*int	main(void)
{
	int t, f;
	int c = '.';
	int v = '.';
	f = ft_toupper(c);
	t = toupper(v);

	printf("%d\n%d", t, f);
}*/