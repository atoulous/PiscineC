/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoulous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/22 17:21:39 by atoulous          #+#    #+#             */
/*   Updated: 2016/02/22 17:22:10 by atoulous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "display.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
