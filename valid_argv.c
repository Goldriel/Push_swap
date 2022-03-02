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

static bool chek_len(char *str, char *lim)
{
    int i;

    if (ft_strlen(str) > ft_strlen(lim))
        return (false);
    if (ft_strlen(str) < ft_strlen(lim))
        return (true);
    i = 0;
    while (str[i] == lim[i])
    {
        if (str[i] == NULL)
            return (true);
        i++;
    }
    if (str[i] > lim[i])
        return (false);
    return (true);
}

static bool is_integer(char **argv)
{
    int par;
    char *lim;

    par = 0;
    while (argv[par] != NULL)
    {
        if (argv[par][0] == '-')
            lim = "-2147483648";
        else
            lim = "2147483647";
        if (!chek_len(argv[par], lim))
            return (false);
        par++;
    }
    return (true);
}

static bool chek_dub (char **argv)
{
    int i;
    int j;

    i = 0;
    while (argv[i] != NULL)
    {
        j = i + 1;
        while (argv[j] != NULL)
        {
            if (!ft_strcmp(argv[i], argv[j]))
                return (false);
            j++
        }
        i++;
    }
    return (true);
}

bool	valid_parm(char **argv)
{
	if (is_num(argv) == false)
		return (false);
    if (is_integer(argv) == false)
        return (false);
    if (chek_dub(argv) == false)
        return (false);
	return (true);
}
