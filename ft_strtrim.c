#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int find_start(const char *s1, const char *set)
{
    int start;
    int i;

    start = 0;
    while (s1[start])
    {
        i = 0;
        while (set[i])
        {
            if (s1[start] == set[i])
                break;
            i++;
        }
        if (set[i] == '\0')
            break;
        start++;
    }
    return start;
}

int find_end(const char *s1, const char *set)
{
    int end;
    int i;
    
    end = strlen(s1) - 1;
    while (end >= 0)
    {
        i = 0;
        while (set[i])
        {
            if (s1[end] == set[i])
                break;
            i++;
        }
        if (set[i] == '\0')
            break;
        end--;
    }
    return (end);
}

char *ft_strtrim(char const *s1, char const *set)
{
    int start;
    int end;
    int j;
    char *str;

    if (!s1 || !set)
        return NULL;
    start = find_start(s1, set);
    end = find_end(s1, set);
    if (start > end) 
        return strdup("");

    str = malloc(end - start + 2);
    if (!str)
        return NULL;

    j = 0;
    while (start <= end)
        str[j++] = s1[start++];
    str[j] = '\0';
    return str;
}


// Test main
int main(void)
{
    char *s1 = "abcqwrcbaq";
    char *set = "abc";
    char *x = ft_strtrim(s1, set);
    printf("%s\n", x);
    free(x);
}
