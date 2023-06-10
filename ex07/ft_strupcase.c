/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-frei <vde-frei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 10:42:12 by vde-frei          #+#    #+#             */
/*   Updated: 2023/06/09 23:16:00 by vde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
			i++;
	}
	return (str);
}
//#include <stdio.h>
//int	main(void)
//{
//	char	a[] = "Sound... Test";
//
//	printf("%s\n", ft_strupcase(a));
//}
