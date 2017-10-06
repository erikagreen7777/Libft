/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02_lib.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egreen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/23 13:14:04 by egreen            #+#    #+#             */
/*   Updated: 2017/04/23 13:14:13 by egreen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "patterns.h"
#include <stdlib.h>

int		*ft_set_arr(char **split)
{
	int		*row;
	int		column;

	row = (int *)malloc(sizeof(int) * 2);
	row[0] = 0;
	row[1] = 0;
	column = 0;
	while (split[row[1]])
	{
		column = 0;
		while (split[row[1]][column])
			column++;
		if (row[1] == 0)
			row[0] = column;
		if (column != row[0])
			return (NULL);
		row[1]++;
	}
	return (row);
}

char	*ft_set_pattern(t_pattern pat, int size)
{
	char	*row;
	int		i;

	row = (char *)malloc(sizeof(char) * (size + 1));
	i = 1;
	row[size] = '\0';
	while (i < size)
		row[i++] = pat.b;
	row[size - 1] = pat.c;
	row[0] = pat.a;
	return (row);
}
