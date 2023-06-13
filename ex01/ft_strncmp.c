/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-frei <vde-frei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 21:49:00 by vde-frei          #+#    #+#             */
/*   Updated: 2023/06/13 02:23:28 by vde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	count;

	count = 0;
	if (n != 0)
	{
		while (s1[count] && (s1[count] == s2[count]) && count < n - 1)
		{
			count++;
		}
		return ((unsigned char)s1[count] - (unsigned char)s2[count]);
	}
	return (0);
}
//#include <stdio.h>
//int main (void)
//{
//	char	a[] = "teste ";
//	char	b[] = "testei";
//	printf("%i\n", ft_strncmp(a, b, 6));
//	return 0;
//}
