/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-frei <vde-frei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 04:15:16 by vde-frei          #+#    #+#             */
/*   Updated: 2023/06/11 18:15:16 by vde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;
	int	dest_len;

	i = 0;
	dest_len = ft_strlen(dest);
	while (src[i] != '\0' && nb)
	{
		dest[dest_len] = src[i];
		dest_len++;
		i++;
		nb--;
	}
	dest[dest_len] = '\0';
	return (dest);
}
//#include <stdio.h>
//int	main (void)
//{
//	char a[] = "hello";
//	char b[] = "worldas";
//
//	ft_strncat(a, b, 1);
//	printf("%s", a);
//	return (0);
//}
