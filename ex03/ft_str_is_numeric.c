/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-frei <vde-frei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 07:57:46 by vde-frei          #+#    #+#             */
/*   Updated: 2023/06/08 08:37:06 by vde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 48 && *str <= 57)
		{
			++str;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
#include <stdio.h>
int	main()
{
	char a[] = "0139";
	char b[] = "";
	char c[] = "1o39";

	printf("%d\n",ft_str_is_numeric(a));
	printf("%d\n",ft_str_is_numeric(b));
	printf("%d\n",ft_str_is_numeric(c));
}
