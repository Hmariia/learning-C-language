/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkrokis <mkrokis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 14:04:56 by mkrokis           #+#    #+#             */
/*   Updated: 2021/06/01 15:35:00 by mkrokis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int num;
	int i;

	i = 1;
	num = nb;
	while (num > 0)
	{
		num /= 10;
		i *= 10;
	}
	i /= 10;
	num = nb;
	while (i > 0)
	{
		ft_putchar(num / i + '0');
		num = num - ((num / i) * i);
		i /= 10;
	}
}
