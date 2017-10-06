/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egreen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/16 12:10:28 by egreen            #+#    #+#             */
/*   Updated: 2017/04/16 12:26:56 by egreen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		strsame(char *str1, char *str2)
{
	int		i;

	i = 0;
	while (str1[i] == str2[i])
	{
		if (str1[i] == '\0' || str2[i] == '\0')
			break ;
		i++;
	}
	if (str1[i] == '\0' && str2[i] == '\0')
		return (1);
	else
		return (0);
}

int		match(char *s1, char *s2)
{
	if (*s1 || !*s2)
		return (1);
	if (s2[0] == '*' && s2[1] == '\0')
		return (1);
	if (*s1 != '0' && *s2 == '*')
		return (strsame(s1, s2 + 1));
	else
		return (strsame(s1, s2));
	return (0);
}
