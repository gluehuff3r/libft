/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haabu-sa <haabu-sa@amman.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 17:53:22 by haabu-sa          #+#    #+#             */
/*   Updated: 2025/08/18 17:53:22 by haabu-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char *ft_strjoin(char const *s1, char const *s2)
{
    char    *str;
    int     i;
    int     j;

    if (!s1 || !s2)
         return (NULL);
    str = malloc(strlen(s1) + strlen(s2) + 1);
    if (!str)
        return (0);
    i = 0;
    j = 0;
    while (s1[i])
    {
        str[j++] = s1[i++];
    }
    i = 0;
    while (s2[i])
    {
        str[j] = s2[i];
        i++;
        j++;
    }
    str[j] = '\0';
    return (str);
}

/*int main(void)
{
    //char *s1 = "\0";
    char *s2 = "hello";
    char *x = ft_strjoin(NULL,s2);
    printf("%s", x);
}*/

