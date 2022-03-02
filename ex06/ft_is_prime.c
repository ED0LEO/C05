/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlothair <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 18:03:50 by mlothair          #+#    #+#             */
/*   Updated: 2021/09/08 21:14:25 by mlothair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt_lower(int nb);

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
