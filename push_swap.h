/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarrakis <jarrakis@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 18:48:13 by jarrakis          #+#    #+#             */
/*   Updated: 2022/03/05 01:50:27 by jarrakis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
/*
** Unix lib
*/
//# include <unistd.h>
/*
** Win lib analog unistd.h
*/
# include <io.h>
# include <stdbool.h>
# include <stdio.h> // delite

# define MIN_INT -2147483648
# define MAX_INT 2147483647

typedef struct s_node
{
	int		num;
	int		index;
	bool	keep;
	void	*next;
}	t_node;

typedef struct s_stack
{
	t_node	*head;
	size_t	size;
	int		markup_head;
}	t_stack;

typedef struct s_stacks
{
	t_stack	a;
	t_stack	b;
}	t_stacks;

typedef struct s_info
{
	char	op[4];
	bool	top;
	int		n_op;
	int		ind;
	int		size;
}	t_info;

typedef struct s_actions
{
	t_info	a;
	t_info	b;
	int		total;
	char	op_same[4];
	int		n_op_same;
}	t_actions;

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
int	ft_atoi(const char *str);
void	*ft_calloc(size_t num, size_t size);

/*
** verificet argv
*/

char	**read_args(int argc, char **argv);
void	validate_argv(char	**argv);
bool	valid_parm(char **argv);

/*
 ** creat and bild stack
 */

void    creat_staks(char **argv, t_stacks *stacks);
t_node *newnode(int num);
void    nodeadd_back(t_node **lst, t_node *new);
void    nodeadd_front(t_node** lst, t_node* new);
t_node* nodelast(t_node* lst);
void    clear_stacks(t_stacks *stacks);
void    exit_program(t_stacks *stacks);

bool	is_sorted(t_stacks* stacks);
bool	operations(char* op, t_stacks* stacks);
bool	push(t_stack* to, t_stack* from);
#endif
