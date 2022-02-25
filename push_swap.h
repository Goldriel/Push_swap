
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

/*
** verificet argv
*/

char    **read_args(int argc, char **argv);

#endif
