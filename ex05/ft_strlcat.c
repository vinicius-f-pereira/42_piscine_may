/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-frei <vde-frei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 05:20:06 by vde-frei          #+#    #+#             */
/*   Updated: 2023/06/12 07:32:57 by vde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str)
	{
		++len;
		++str;
	}
	return (len);
}
unsigned int    ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int    dest_len;
    unsigned int    src_len;
    unsigned int    i;

    dest_len = ft_strlen(dest);
    src_len = ft_strlen(src);
    i = 0;
    while (src[i] && dest_len + i + 1 < size)
    {
        dest[dest_len + i] = src[i];
        i++;
    }
    dest[dest_len + i] = '\0';
    if (size < dest_len)
        return (src_len + size);
    else
        return (src_len + dest_len);
}
//#include <stdio.h>
//int    main(void)
//{
//    char    a[] = "Helload";
//    char    b[11] = "1234567890";
//
//    printf("%s, %s\n", a, b);
//    ft_strlcat(a, b, 12);
//    printf("%s\n", a);
//}
