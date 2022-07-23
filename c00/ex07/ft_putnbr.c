/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nradin <nradin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 15:03:25 by nradin            #+#    #+#             */
/*   Updated: 2022/07/23 16:58:15 by nradin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	char	a[11];
	int		i;
	int		j;

	i = 0;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	while (nb != 0 || i == 0)
	{
		a[i] = nb % 10 + 48;
		nb /= 10;
		i++;
	}
	j = i - 1;
	while (j >= 0)
	{
		ft_putchar(a[j]);
		j--;
	}
}
