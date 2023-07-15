/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-frei <vde-frei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 11:23:52 by vde-frei          #+#    #+#             */
/*   Updated: 2023/06/08 11:51:53 by vde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	if ((str[0] >= 'a') && (str[0] <= 'z'))
	{
	str[0] -= 32;
	}
	while (str[i])
	{
		if ((str[i - 1] < 47 || str[i - 1] > 57) && (str[i - 1] < 65)
			&& ((str[i] >= 'a') && (str[i] <= 'z')))
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
//int	main()
//{
//	char a[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
//	printf("%s\n", ft_strcapitalize(a));
//}
