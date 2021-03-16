/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ji-park <gudor123@nate.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 19:35:12 by ji-park           #+#    #+#             */
/*   Updated: 2020/08/03 19:35:25 by ji-park          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char a;
	char b;

	a = '0';
	b = '9';
	while (a <= b)
	{
		write(1, &a, 1);
		a++;
	}
}