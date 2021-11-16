/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkochhan <rkochhan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 16:46:10 by rkochhan          #+#    #+#             */
/*   Updated: 2021/11/15 17:49:12 by rkochhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_arg.h"

void	ft_va_start(t_va_list ap, void *last)
{
	ap = last;
}

void	*ft_va_arg(void *ap, unsigned char size)
{
	return ((void *)0);
}

void	ft_va_end(t_va_list ap)
{
	
}
