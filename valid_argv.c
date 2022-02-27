/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_argv.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarrakis <jarrakis@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 20:17:45 by jarrakis          #+#    #+#             */
/*   Updated: 2022/02/27 20:43:29 by jarrakis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static bool	is_num(char **argv)
{
	int	par;
	int	num;

	par = 0;
	while (argv[par] != NULL)
	{
		num = 0;
		if (argv[par][num] == '-')
			num++;
		if (ft_isdigit(argv[par][num]) == false)
			return (false);
		while (argv[par][num] != NULL)
		{
			if (ft_isdigit(argv[par][num] == false))
				return (false);
			num++;
		}
		par++;
	}
	return (true);
}

bool	valid_parm(char **argv)
{
	if (is_num(argv) == false)
		return (false);
	return (true);
}
