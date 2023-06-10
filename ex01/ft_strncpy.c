/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-frei <vde-frei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 18:20:51 by vde-frei          #+#    #+#             */
/*   Updated: 2023/06/08 10:31:11 by vde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (*src && n)
	{
		*(dest + i++) = *src++;
		--n;
	}
	while (n--)
	{
		*(dest + i++) = '\0';
	}
	return (dest);
}
