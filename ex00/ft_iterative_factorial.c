/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marialedesmabasualdo <maledesm@studen      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 07:57:07 by marialede         #+#    #+#             */
/*   Updated: 2022/08/29 08:14:36 by marialede        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int ft_iterative_factorial(int nb)
{
	int num;

	num = 1;
	while (nb > 1 )
	{
		num = num * nb;
		nb--;
	}
 	return (num);	
}
int main ()
{
	int r;
	r = ft_iterative_factorial(0);
	printf("%d\n", r);
}
