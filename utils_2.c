/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarrakis <jarrakis@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 18:47:32 by jarrakis          #+#    #+#             */
/*   Updated: 2022/03/25 20:25:21 by jarrakis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	new_str = (char *)malloc(sizeof(char) * \
	(ft_strlen(s1) + ft_strlen(s2) + 1));
	if (new_str == NULL)
		return (NULL);
	while (i < ft_strlen(s1))
	{
		new_str[i] = s1[i];
		i++;
	}
	while (i < (ft_strlen(s1) + ft_strlen(s2)))
	{
		new_str[i] = s2[j];
		i++;
		j++;
	}
	new_str[i] = '\0';
	return (new_str);
}

void	clear_twise_arr(char	**arr)
{
	int	i;
	int	len;

	len = 0;
	i = 0;
	if (arr == NULL)
		return ;
	while (arr[len] != NULL)
		len++;
	while (i < len)
	{
		free(arr[i]);
		arr[i] = NULL;
		i++;
	}
	free (arr);
	arr = NULL;
}

int	ft_strcmp(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

void	*ft_calloc(size_t num, size_t size)
{
	void	*memory;
	size_t	i;

	i = 0;
	memory = malloc(num * size);
	if (memory == NULL)
		return (NULL);
	while (i < num * size)
	{
		((unsigned char *)memory)[i] = 0;
		i++;
	}
	return ((void *)memory);
}
