/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egreen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/08 07:38:46 by egreen            #+#    #+#             */
/*   Updated: 2017/04/08 07:55:15 by egreen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//file is 9KB


#include <unistd.h>

void	sastantua(int size)
{
	int filedesc = open("f-sastantua.txt", O_RDWR);
	if (filedesc < 0)
		return 1;

	if (write(filedesc, "This will be output to sastantua.txt\n", 37) != 37)
	{
		write(2, "There was an error writing to sastantua.txt\n");
		return 1;
	}
}
