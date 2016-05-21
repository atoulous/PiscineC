/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoulous <atoulous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/27 10:31:50 by atoulous          #+#    #+#             */
/*   Updated: 2015/10/27 16:59:04 by atoulous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_find_next_prime(int nb)
{
	int		i;

	i = 2;
	if (nb <= 1)
		return (2);
	if (nb > 1)
		while (i < nb)
		{
			if (nb % i == 0)
			{
				nb++;
				i = 1;
			}
			i++;
		}
	return (nb);
}
