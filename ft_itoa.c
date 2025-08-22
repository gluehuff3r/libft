/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haabu-sa <haabu-sa@amman.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 19:07:47 by haabu-sa          #+#    #+#             */
/*   Updated: 2025/08/22 19:07:47 by haabu-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <string.h>
#include <stdlib.h>
#include <stdio.h>
int	len(int n)
{
	int	i;
	
	i = 0;
	if(n < 0)
		i++;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
 }
char *ft_itoa(int n)
{
	char	*str;
	int		i;
	int		num;

	i = len(n);
		if (n == 0)
		return (strdup("0"));
	if (n == -2147483648)
		return (strdup("-2147483648"));
	str = malloc(len(n) + 1);
		if (!str)
		return (NULL);
	str[i--] = '\0';
	if(n < 0)
	{
		n = n * -1;
		str[0] = '-';
	}
	while(n > 0)
	{
		num = n % 10;
		str[i--] = num + '0';
		n = n / 10;
	}	
	return (str);
}

int main()
{
	char * x = ft_itoa(-2147483648);
	printf("%s",x);
}