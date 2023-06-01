/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-frei <vde-frei@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 07:12:24 by vde-frei          #+#    #+#             */
/*   Updated: 2023/05/31 19:18:13 by vde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char a, char b)
{
	write (1, &a, 1);
	write (1, &b, 1);
}

void	ft_putint(int num, int max)
{
	char	check_unit;
	char	check_decimal;

	if (num <= 9)
	{
		check_unit = num + 48;
		ft_print('0', check_unit);
	}
	else if (num <= max)
	{
		check_unit = (num % 10) + 48;
		check_decimal = (num / 10) + 48;
		ft_print(check_decimal, check_unit);
	}
}

void	ft_catint(int first, int second)
{
	ft_putint (first, 98);
	write (1, " ", 1);
	ft_putint (second, 99);
	if (first != 98 || second != 99)
		ft_print (',', ' ');
}

void	ft_print_comb2(void)
{
	int	d;
	int	u;

	d = 0;
	while (d <= 98)
	{
		u = d + 1;
		while (u <= 99)
		{
			ft_catint(d, u);
			u++;
		}
		d++;
	}
}
