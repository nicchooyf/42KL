#include <stdio.h>
#include <stdlib.h>

/* EXAM VERSION */

int count_tabs(char *str)
{
    int i;
    int count;
    int check;

    count = 0;
    i = 0;
    check = 1;
    while (str[i])
    {
        if (check && !(str[i] == 32 || str[i] == 10 || str[i] == 9))
        {
            count++;
            check = 0;
        }
        else if (!check && (str[i] == 32 || str[i] == 10 || str[i] == 9))
            check = 1;
        i++;
    }
    return (count);
}

char *ft_strdup(char *str)
{
    char *p;
    char *temp;
    int i;
    int n;

    i = 0;
    n = 0;
    while (str[i] && !(str[i] == 32 || str[i] == 10 || str[i] == 9))
        i++;
//    printf("i is %d\n", i);
    p = malloc(sizeof(char) * (i + 1));
    temp = p;
    if (p == NULL)
      return (NULL);
    while (n < i)
    {
        *temp++ = *str++;
        n++;
    }
    *temp = '\0';
//   printf("%s\n", p);
    return (p);
}

char **ft_split(char *str)
{
    char **tab;
    char **temp;
    int count;
    int check;
    int i;

    check = 1;
    count = count_tabs(str);
//    printf("count is %d\n", count);
    tab = malloc(sizeof(char *) * (count + 1));
    if (tab == NULL)
        return (NULL);
    temp = tab;
    while (*str)
    {
        if (check && !(*str == 32 || *str == 10 || *str == 9))
        {
            *temp = ft_strdup(str);
//           printf("%s\n", *temp);
            check = 0;
            temp++;
        }
        else if (!check && (*str == 32 || *str == 10 || *str == 9))
            check = 1;
        str++;
    }
    *temp = 0;
    return (tab);
}

int main(void)
{
    char str[] = {" hello this is chicken        "};
    char **tab;

    tab = ft_split(str);
    while (*tab)
    {
        printf("%s\n", *tab);
        tab++;
    }
}