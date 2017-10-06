/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egreen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/23 13:12:48 by egreen            #+#    #+#             */
/*   Updated: 2017/04/23 13:12:51 by egreen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	ft_rush_name(int nb)
{
	ft_putstr("[rush-0");
	ft_putchar(nb);
	ft_putstr("]");
}

void	ft_build_pattern(int x, int y)
{
	ft_putstr(" [");
	ft_putchar(x + '0');
	ft_putstr("] [");
	ft_putchar(y + '0');
	ft_putstr("]");
}

void	ft_create_output(char *args, int *row)
{
	int		i;

	ft_rush_name(args[0]);
	ft_build_pattern(row[0], row[1]);
	i = 1;
	while (args[i])
	{
		ft_putstr(" || ");
		ft_rush_name(args[i++]);
		ft_build_pattern(row[0], row[1]);
	}
	ft_putchar('\n');
}
