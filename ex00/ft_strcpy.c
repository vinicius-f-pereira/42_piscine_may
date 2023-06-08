/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-frei <vde-frei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 00:22:17 by vde-frei          #+#    #+#             */
/*   Updated: 2023/06/07 20:45:43 by vde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void	*ft_strcpy(char *dest, char *src);

void	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (*src)
	{
		*(dest + i++) = *src++;
		*(dest + i) = '\0';
	}
		return (dest);
}

int	main(void)
{
	char	a[] = "Hello";
	char	b[] = "World";

	ft_strcpy(a, b);
	printf("%s\n%s\n", a, b);
}
