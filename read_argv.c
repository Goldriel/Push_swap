/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_argv.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarrakis <jarrakis@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 18:46:50 by jarrakis          #+#    #+#             */
/*   Updated: 2022/02/27 20:50:59 by jarrakis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	validate_argv(char	**argv)
{
    if (valid_parm(argv) == false)
    {
        clear_twise_arr(argv);
        exit(print_error());
    }
}

char	**read_args(int argc, char **argv)
{
	char	**argv_split;
	char	*string;
	char	*tmp;
	int		i;

	string = ft_strdup("");
	if (string == NULL)
		exit(print_error());
	i = 1;
	while (i < argc)
	{
		tmp = ft_strjoin(argv[i], " ");
		if (tmp == NULL)
			exit (print_error());
		string = ft_strjoin (string, tmp);
		free (tmp);
		if (string == NULL)
			exit (print_error());
		i++;
	}
	argv_split = ft_split (string, ' ');
	free(string);
	if (argv_split == NULL)
		exit (print_error());
	return (argv_split);
}
