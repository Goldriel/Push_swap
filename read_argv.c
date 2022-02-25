#include"push_swap.h"

char    **read_args(int argc, char **argv)
{
    char    **argv_split;
    char    **string;
    char    **tmp;
    int     i;

    string = ft_strdup("");
    if (string == NULL)
        exit(print_error());
    i = 1;
    while (i < argc)
    {
        tmp = ft_strjoin(argv[i], " ");
        if(tmp == NULL)
            exit(print_error());
        string = ft_strjoin(string, tmp);
        free(tmp);
        if(string == NULL)
            exit(print_error());
        i++;
    }
    argv_split = ft_split(string, ' ');
    free(string);
    if (argv_split == NULL)
        exit(print_error());
    return (argv_split);
}