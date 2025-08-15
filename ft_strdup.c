/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haabu-sa <haabu-sa@amman.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 17:14:45 by haabu-sa          #+#    #+#             */
/*   Updated: 2025/08/12 17:14:46 by haabu-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
char    *ft_strdup(const char *s)
{
    char    *str;
    int     i;
    
    str = malloc(sizeof(char)*strlen(s) + 1);
    if(!str)
        return(NULL);
        i = 0;
        while(i <= strlen(s))
        {
            str[i] = s[i];
            i++;
        }
        str[i] = '\0';
        return(str);
}




/*int main() 
{
char *s  = "adhnwserkl;hjm;sdflh;sdfjmhgwehwesr";
char ss[50] = "adhnwserkl;hjm;sdflh;sdfjmhgwehwesr";
char *x = ft_strdup(s);
char *z = strdup(ss);
printf("%s\n%s",s,ss);
    return 0;
}*/
