/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoulous <atoulous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/28 21:44:20 by atoulous          #+#    #+#             */
/*   Updated: 2015/10/29 16:21:18 by atoulous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (((str[i] >= 'a') && (str[i] <= 'z'))
			|| ((str[i] >= 'A') && (str[i] <= 'Z')))
			j++;
		i++;
	}
	if (str[0] == '\0')
		return (1);
	if (i == j)
		return (1);
	else
		return (0);
}
