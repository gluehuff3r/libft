/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haabu-sa <haabu-sa@amman.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 18:22:19 by haabu-sa          #+#    #+#             */
/*   Updated: 2025/08/25 16:42:55 by haabu-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	len(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i++;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

void	fill_str(int n, char *str, int i)
{
	while (n > 0)
	{
		str[i--] = (n % 10) + '0';
		n = n / 10;
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	int		i;
	char	str[12];

	if (n == 0)
	{
		write(fd, "0", 1);
		return ;
	}
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	i = len(n);
	str[i--] = '\0';
	if (n < 0)
	{
		n = -n;
		str[0] = '-';
	}
	fill_str(n, str, i);
	i = 0;
	while (str[i])
		write(fd, &str[i++], 1);
}

// int main()
// {
// 	//int x = -2147483648LL;
// 	ft_putnbr_fd(-214748364811LL,2);
// }