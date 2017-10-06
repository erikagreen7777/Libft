/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egreen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 10:08:45 by egreen            #+#    #+#             */
/*   Updated: 2017/09/20 10:40:18 by egreen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	char	see;
	int		len;

	str = s;
	see = (char)c;
	len = ft_strlen(str);
	while ((len != 0) && str[len] != see)
		len--;
	if (str[len] == see)
		return (&str[len]);
	return (NULL);
}
