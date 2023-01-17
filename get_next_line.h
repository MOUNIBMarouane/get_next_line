/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamounib <mamounib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 21:47:06 by mamounib          #+#    #+#             */
/*   Updated: 2023/01/17 18:33:06 by mamounib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdlib.h>
# include <stdio.h>
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

int 	ft_strlen(char *str);
int		ft_strchr(char *s, int c);
char 	*ft_strjoin(char const *s1, char const *s2);
void 	*ft_calloc(size_t count, size_t size);
void 	*ft_memcpy(void *dist, const void *src, size_t n);
char 	*ft_substr(char const *s, unsigned int start, size_t len);
char 	*ft_strjoin(char const *s1, char const *s2);
char 	*ft_read(int fd);
char 	*get_next_line(int fd);
#endif // !GET_NEXT_LINE_H