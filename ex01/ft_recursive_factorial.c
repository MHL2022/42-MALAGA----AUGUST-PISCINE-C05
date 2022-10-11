/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marialedesmabasualdo <maledesm@studen      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 08:18:39 by marialede         #+#    #+#             */
/*   Updated: 2022/08/29 09:06:53 by marialede        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int ft_recursive_factorial(int nb)
{
	int num;

	num = 1;
	if( nb > 0 )
	{
		num = num * nb * ft_recursive_factorial(nb - 1);
	}
	if (nb < 0)
	 return(0);

	return (num); 
}
int main()
{
	int b;

	b = ft_recursive_factorial(0);
	printf("%d\n", b);
}
