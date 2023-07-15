/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-frei <vde-frei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 21:33:08 by vde-frei          #+#    #+#             */
/*   Updated: 2023/06/13 06:04:34 by vde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s2)
	{
			++s1;
			++s2;
	}
	return (*s1 - *s2);
}
//#include <stdio.h>
//int main (void)
//{
//	char	a[] = "teste ";
//	char	b[] = "testé";
//	printf("%i\n", ft_strcmp(a, b));
//	return 0;
//}
