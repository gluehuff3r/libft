/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  haabu-sa < haabu-sa@student.42amman.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 19:28:03 by  haabu-sa         #+#    #+#             */
/*   Updated: 2025/08/19 19:28:03 by  haabu-sa        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int word_counter(char const *s, char c)
{
    int i;
    int counter;

    i = 0;
    counter = 0;
    if(!s)
        return (0);

    while(s[i])
    {
        if(s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
            counter++;
        i++;
    }
     if(s[0] == c || s[0] == '\0')
       return(counter);
    return (counter + 1);
}

// char **ft_split(char const *s, char c)
// {
//     int word_cont;

//     word_cont = word_counter(s, c);
//     if (!s)
//         return (NULL);

// }

int main(void)
{
    int x = word_counter("        ", ' ');
    printf("%zu",x);
}