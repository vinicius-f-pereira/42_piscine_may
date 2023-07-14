/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-frei <vde-frei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 21:49:00 by vde-frei          #+#    #+#             */
/*   Updated: 2023/06/12 07:28:08 by vde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (*s1 == *s2 && --n && *s2)
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
//	char	b[] = "testei";
//	printf("%i\n", ft_strncmp(a, b, 6));
//	return 0;
//}
