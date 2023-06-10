/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-frei <vde-frei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 00:22:17 by vde-frei          #+#    #+#             */
/*   Updated: 2023/06/09 22:50:44 by vde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}
//#include <stdio.h>
//int	main(void)
//{
//	char	a[] = "source";
//	char	b[] = "dadsja";
//
//	printf("%s, %s\n", a, b);
//	ft_strcpy(b, a);
//	printf("%s, %s\n", a, b);
//}
