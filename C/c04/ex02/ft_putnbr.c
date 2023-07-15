/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-frei <vde-frei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 22:02:58 by vde-frei          #+#    #+#             */
/*   Updated: 2023/06/13 22:44:22 by vde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long int	nb1;

	nb1 = nb;
	if (nb1 < 0)
	{
		ft_putchar('-');
		nb1 *= -1;
	}
	if (nb1 < 10)
	{
		ft_putchar(nb1 + '0');
		return ;
	}
	else
	{
		ft_putnbr(nb1 / 10);
		ft_putnbr(nb1 % 10);
	}
}
//int	main(void)
//{
//	long int a = -2147483648;
//	ft_putnbr(a);
//}
