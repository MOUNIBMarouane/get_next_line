/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamounib <mamounib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 21:54:42 by mamounib          #+#    #+#             */
/*   Updated: 2023/01/17 18:35:53 by mamounib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strchr(char *s, int c)
{
	int	i;
	
	i = 0;
}

void *ft_calloc(size_t count, size_t size)
{
	void *p;
	size_t i;

	p = (void *)malloc(count * size);
	if (!p || (count == SIZE_MAX && size == SIZE_MAX))
		return (0);
	i = 0;
	while (i < count * size)
	{
		((unsigned char *)p)[i] = 0;
		i++;
	}
	return (p);
}

void *ft_memcpy(void *dist, const void *src, size_t n)
{
	size_t i;

	if (dist == src)
		return (dist);
	i = 0;
	while (i < n)
	{
		((unsigned char *)dist)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dist);
}

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t i;
	char *p;

	if (!s)
		return (0);
	if (start >= ft_strlen((char *)s))
		len = 0;
	if (len > ft_strlen((char *)s))
		len = ft_strlen((char *)s);
	p = (char *)malloc(len + 1);
	if (!p)
		return (0);
	i = 0;
	while (i < len && s[start])
	{
		p[i] = s[start];
		i++;
		start++;
	}
	p[i] = '\0';
	return (p);
}

char *ft_strjoin(char const *s1, char const *s2)
{
	size_t i;
	char *p;

	if (!s1 || !s2)
		return (0);
	i = ft_strlen(s1) + ft_strlen(s2) + 1;
	p = (char *)malloc(i);
	if (!p)
		return (0);
	ft_memcpy(p, s1, ft_strlen(s1));
	ft_memcpy(p + (ft_strlen(s1)), s2, ft_strlen(s2));
	p[i - 1] = '\0';
	return (p);
}
