/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-frei <vde-frei@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 03:00:43 by vde-frei          #+#    #+#             */
/*   Updated: 2023/06/04 03:12:01 by vde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;

	*a = div;
	*b = mod;
//	printf("%d, %d\n", *a, *b);
}
/*int	main(void)
{
	int a = 10;
	int b = 2;

	ft_ultimate_div_mod(&a, &b);
}*/
