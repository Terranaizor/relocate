/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nradin <nradin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 15:20:10 by nradin            #+#    #+#             */
/*   Updated: 2022/07/23 16:58:11 by nradin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	output_array(int *nums)
{
	int		i;
	char	c;

	i = 0;
	while (nums[i] != -1)
	{
		c = nums[i] + 48;
		ft_putchar(c);
	}
}

void	ft_print_combn_rec(int n, int *nums, int d)
{
	int i;

	i = 0;
	if (n != 1)
	{
		d++;
		n--;
		ft_print_combn_rec(n, nums, d);
	}
	else
	{
		return (0);
	}
}

void	ft_print_combn(int n)
{
	int	nums [9];
	int	i;
	char c;

	i = 0;
	while (i < 9)
	{
		nums[i] = -1;
	}
	i = 0;
	while (i < n)
	{
		c = i + 48;
		ft_putchar(c)
	}
	ft_print_combn_rec(n, nums, 0);
}

int	main(void)
{
	ft_print_alphabet();
	return (0);
}
