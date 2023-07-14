/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-frei <vde-frei@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 02:28:38 by vde-frei          #+#    #+#             */
/*   Updated: 2023/06/04 03:00:07 by vde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod);

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*int	main(void)
{
	int a = 10;
	int b = 2;
	int div;
	int mod;

	ft_div_mod(a, b, &div, &mod);
	
	printf("a: %d, b: %d, div: %d, mod: %d\n", a, b, div, mod);
}*/
