/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamounib <mamounib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 21:44:36 by mamounib          #+#    #+#             */
/*   Updated: 2023/01/17 18:27:30 by mamounib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *get_next_line(int fd)
{
	static char *stash;
	int 		nbrc;

	nbrc = read(fd, stash, BUFFER_SIZE);
	while (ft_strchr(stash,'\n'))
	{
		
	}
	
}

int main(int argc, char const *argv[])
{
	char *s1 = "123456\n123";
	char *s2;

	int fd = open("test", O_RDONLY);
	
	char *line;
		line = get_next_line(fd);
	while (line)
	{
		free(line);
		puts("-----------");
		printf("line :%s", line);
		line = get_next_line(fd);
		
	}
	return (0);
}
