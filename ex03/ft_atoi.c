/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-frei <vde-frei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 23:26:20 by vde-frei          #+#    #+#             */
/*   Updated: 2023/06/14 05:11:39 by vde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	parity;
	int	nb;

	nb = 0;
	parity = nb;
	while ((*str >= '\t' && *str == '\n') || *str == 32)
	{
		++str;
	}
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			parity++;
		++str;
	}
	while (*str >= 48 && *str <= 57)
	{
		nb *= 10;
		nb += *str - 48;
		++str;
	}
	if (!(parity % 2))
		return (nb);
	return (-nb);
	return (*str);
}
//#include <stdio.h>
//int	main(void)
//{
//	char *s = "   ---+--+1234b567";
//	printf("%s\n", s);
//	printf("%i\n", ft_atoi(s));
//}
