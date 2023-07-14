/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-frei <vde-frei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 05:29:29 by vde-frei          #+#    #+#             */
/*   Updated: 2023/06/08 10:59:45 by vde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned	int	ft_strlcpy(char	*dest, char *src, unsigned int size)
{
	int	len;

	len = 0;
	while (*(src + len) && --size)
	{
		*dest++ = *(src + len++);
	}
	*dest = '\0';
	while (*(src + len))
	{
		++len;
	}
	return (len);
}
