/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamounib <mamounib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 21:44:36 by mamounib          #+#    #+#             */
/*   Updated: 2023/01/01 03:19:31 by mamounib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

#include "get_next_line.h"

int ft_strlen(char *s, char end)
{
	int i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != end)
		i++;
	return (i);
}

char *ft_strdup(char *s)
{
	char *set;
	int len;

	len = ft_strlen(s, '\0');
	set = (char *)malloc((len + 1) * sizeof(char));
	if (set == NULL)
		return (NULL);
	set[len] = '\0';
	while (len-- >= 0)
	{
		set[len] = s[len];
	}
	return (set);
}

char *ft_strjoin(char *s1, char *s2)
{
	char *s;
	int i;
	int j;
	int nbr;

	if (!s1 || s1[0] == '\0')
		return (s2);
	nbr = ft_strlen(s1, '\0') + ft_strlen(s2, '\0');
	s = (char *)malloc(nbr * sizeof(char));
	if (!s)
		return (NULL);
	j = 0;
	i = 0;
	while (s1[i] != '\0')
	{
		s[j++] = s1[i++];
	}
	i = 0;
	while (s2[i] != '\0')
	{
		s[j++] = s2[i++];
	}
	s[j] = '\0';
	return (s);
}

int ft_findchar(char *s, char c, int *times)
{
	int i;
	i = 0;

	while (*s != '\0' && i <= (BUFFER_SIZE * *times))
	{
		if (*s == c)
			return (i);
		i++;
		s++;
	}
	return (0);
}

char *ft_read(int fd, char *stash)
{
	char *buffer;
	int i;
	int nread;

	buffer = (char *)malloc(BUFFER_SIZE * sizeof(char));
	nread = read(fd, buffer, BUFFER_SIZE);
	i = 1;
	while (nread > 0)
	{
		stash = ft_strdup(ft_strjoin(stash, buffer));

		if (ft_findchar(stash, '\n', &i) > 0)
			break;
		nread = read(fd, buffer, BUFFER_SIZE);
		i++;
	}
	return (stash);
}

char *ft_get_line(char *s)
{
	int i;
	char *line;

	i = ft_strlen(s, '\n');
	line = (char *)malloc(i);
	if (!line)
		return (NULL);
	line[i] = '\0';
	while (i >= 0)
	{
		line[i] = s[i];
		i--;
	}
	return (line);
}
char *ft_get_rest(char *s)
{
	int index;
	int i;
	char *line;

	i = ft_strlen(s, '\n') + 1;
	index = ft_strlen(s + i, '\0');
	line = (char *)malloc(index + 1);
	if (!line)
		return (NULL);
	line[index] = '\0';
	while (index >= 0)
	{
		line[index] = s[i + index];
		index--;
	}
	return (line);
}
char *get_next_line(int fd)
{
	static char *stash;
	char *line;
	int i;
	stash = ft_read(fd, stash);
	line = ft_get_line(stash);
	stash = ft_get_rest(stash);
	return (line);
}

int main(int argc, char const *argv[])
{
    char	*s1 = "123456\n123";
    char	*s2;

	int fd = open("test", O_RDONLY);
	puts("......");
	printf("line :%s", get_next_line(fd));
	puts("......");
	printf("line :%s", get_next_line(fd));

	return 0;
}
