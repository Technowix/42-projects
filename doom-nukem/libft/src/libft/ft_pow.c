/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcourtil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 16:05:34 by tcourtil          #+#    #+#             */
/*   Updated: 2018/11/15 16:11:08 by tcourtil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_pow(int x, int p)
{
	if (p <= 0)
		return (1);
	return (x * ft_pow(x, p - 1));
}