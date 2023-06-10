/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-frei <vde-frei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 10:35:40 by vde-frei          #+#    #+#             */
/*   Updated: 2023/06/09 22:58:47 by vde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 32 && *str < 127)
		{
			str++;
		}
		else
		{
			return (0);
		}
	}	
	return (1);
}
//#include <stdio.h>
//int	main(void)
//{
//	printf("%d\n", ft_str_is_printable("\n\n"));
//}
