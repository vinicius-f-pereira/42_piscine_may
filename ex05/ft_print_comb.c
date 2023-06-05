/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-frei <vde-frei@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 01:16:28 by vde-frei          #+#    #+#             */
/*   Updated: 2023/06/01 20:56:03 by vde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char h, char t, char u)
{
	write (1, &h, 1);
	write (1, &t, 1);
	write (1, &u, 1);
	if (h != '7' || t != '8' || u != '9')
	{
		write (1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	hundreds;
	char	tens;
	char	unit;

	hundreds = '0';
	while (hundreds <= '7')
	{
		tens = hundreds + 1;
		while (tens <= '8')
		{
			unit = tens + 1;
			while (unit <= '9')
			{
				ft_print(hundreds, tens, unit);
				unit++;
			}
			tens++;
		}	
		hundreds++;
	}
}
