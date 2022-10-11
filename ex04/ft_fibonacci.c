/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maledesm <maledesm@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 18:48:36 by maledesm          #+#    #+#             */
/*   Updated: 2022/08/30 17:25:38 by maledesm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_fibonacci(int nb)
{
	
	if (nb < 0)
		return (-1);
	else if (nb > 2)
		return (nb);
	return (ft_fibonacci(nb - 1) + ft_fibonacci(nb - 2));

}
