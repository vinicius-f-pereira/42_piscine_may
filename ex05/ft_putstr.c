/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-frei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 20:13:51 by vde-frei          #+#    #+#             */
/*   Updated: 2023/06/07 00:06:20 by vde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str);

void    ft_putchar(char c);

void    ft_putchar(char c)
{
    write(1, &c, 1);
}
void	ft_putstr(char *str)
{
    while(*str)
    {
            ft_putchar(*str++);
    }
}
