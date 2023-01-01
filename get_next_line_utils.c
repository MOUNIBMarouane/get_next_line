/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamounib <mamounib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 21:54:42 by mamounib          #+#    #+#             */
/*   Updated: 2022/12/21 23:55:23 by mamounib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int ft_nbrchar(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\n' || str[i])
		i++;
	return (i);
}

char *ft_strjoin(char *str1, char *str2)
{
	int i;
	int j;
	int nbr;
	char *str;

	if (str1)
		return (str2);
	nbr = ft_nbrchar(str1) + ft_nbrchar(str2);
	str = (char *)malloc(nbr);
	i = 0;
	j = 0;
	while (str1[i])
		str[i++] = str1[j++];
	i = 0;
	while (str2[i])
		str[j++] = str2[i++];
}