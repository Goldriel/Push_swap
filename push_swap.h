/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarrakis <jarrakis@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 18:48:13 by jarrakis          #+#    #+#             */
/*   Updated: 2022/02/27 20:30:55 by jarrakis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stdbool.h>
# include <stdio.h> // delite

typedef struct s_stack
{
	int		num;
	int		index;
	bool	keep;
	void	*next;
}	t_stack;

typedef struct s_stacks
{
	t_stack	a;
	t_stack	b;
}	t_stacks;

/*
 ** utils function
 */

char	**ft_split(char const *s, char c);
int		print_error(void);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlen(const char *c);
void	*ft_memcpy(void *dest, const void *src, size_t n);
char	*ft_strdup(const char *s1);
char	*ft_strjoin(char const *s1, char const *s2);
void	clear_twise_arr(char	**arr);
int		ft_isdigit(int c);
int	ft_strcmp(const char *s1, const char *s2);

/*
** verificet argv
*/

char	**read_args(int argc, char **argv);
void	validate_argv(char	**argv);
bool	valid_parm(char **argv);

#endif
