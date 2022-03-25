/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarrakis <jarrakis@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 18:48:28 by jarrakis          #+#    #+#             */
/*   Updated: 2022/02/27 20:15:12 by jarrakis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	algoritm(t_stacks* stacks)
{
	if (is_sorted(stacks))
		return;
}

int	main(int argc, char **argv)
{
	t_stacks	stacks;
	char		**argv_split;
	int			i;

	i = 0;
	if (argc < 2)
		exit(print_error());
	else
	{
		argv_split = read_args(argc, argv);
        validate_argv(argv_split);
        creat_staks(argv_split, &stacks);
		clear_twise_arr(argv_split);
		algoritm(&stacks);
		clear_stacks(&stacks);
	}
	return (0);
}

