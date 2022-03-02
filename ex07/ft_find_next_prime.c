/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlothair <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 18:20:20 by mlothair          #+#    #+#             */
/*   Updated: 2021/09/08 15:26:02 by mlothair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb);
int	ft_sqrt_lower(int nb);

int	ft_find_next_prime(int nb)
{
	if (nb < 3)
		return (2);
	while (!(ft_is_prime(nb)) && nb <= 2147483647)
	{
		nb++;
	}
	return (nb);
}

int	ft_is_prime(int nb)
{
	int	div;
	int	limit;

	limit = ft_sqrt_lower(nb);
	div = 2;
	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	while (div <= limit)
	{
		if (nb % div == 0)
			return (0);
		div++;
	}
	return (1);
}

int	ft_sqrt_lower(int nb)
{
	int	a;
	int	i;

	i = 2;
	a = 1;
	if (nb == 0)
		return (0);
	if (nb == 1)
		return (1);
	while (a < nb && i <= 46340)
	{
		a = i * i;
		i++;
	}
	return (i - 1);
}
