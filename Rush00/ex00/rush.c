/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontoya <dmontoya@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/09 01:09:19 by dmontoya          #+#    #+#             */
/*   Updated: 2017/04/09 14:39:10 by egreen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_flowers(int x, int x1)
{
	char sign;
	char blank;

	sign = '|';
	blank = ' ';
	while (x > 0)
	{
		if (x == x1 || x == 1)
		{
			ft_putchar(sign);
		}
		else
		{
			ft_putchar(blank);
		}
		x--;
	}
}

void	ft_bottom_bottom(int x, int x1)
{
	char circle;
	char minusign;

	circle = 'o';
	minusign = '-';
	while (x > 0)
	{
		if (x == x1 || x == 1)
		{
			ft_putchar(circle);
		}
		else
		{
			ft_putchar(minusign);
		}
		x--;
	}
}

void	ft_rush(int x, int y)
{
	char x1;
	char y1;

	y1 = y;
	x1 = x;
	while (y > 0)
	{
		if (y1 == y || y == 1)
		{
			ft_bottom_bottom(x, x1);
			x = x1;
		}
		else
		{
			ft_flowers(x, x1);
			x = x1;
		}
		y--;
		ft_putchar('\n');
	}
}
