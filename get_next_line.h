/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamounib <mamounib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 21:47:06 by mamounib          #+#    #+#             */
/*   Updated: 2022/12/31 05:45:24 by mamounib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdlib.h>
# include <stdio.h>
#ifndef BUFFER_SIZE
# define BUFFER_SIZE 10
#endif

int     ft_nbrchar(char *str);
char    *ft_strjoin(char *str1, char *str2);

#endif // !GET_NEXT_LINE_H