/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ji-park <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 11:58:23 by ji-park           #+#    #+#             */
/*   Updated: 2020/08/08 13:01:42 by ji-park          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
{
	int		l;
	char	w;

	l = 0;
	if (str[l] == '\0')
		return (1);
	while (str[l] != '\0')
	{
		w = str[l];
		if (!((w <= 'Z' && w >= 'A') || (w >= 'a' && w <= 'z')))
			return (0);
		l++;
	}
	return (1);
}
