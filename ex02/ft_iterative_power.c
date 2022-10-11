/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marialedesmabasualdo <maledesm@studen      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 09:09:29 by marialede         #+#    #+#             */
/*   Updated: 2022/08/29 09:39:42 by marialede        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int ft_iterative_power(int nb, int power)
{
	int num;

	num = nb;
	if (nb == 0  && power == 0) 
		return (1);
	while (power > 1)
	{
		num = num * nb;
		power--;
	}
	if (power < 0)
		return (0);
	return (num);
} 
int main()
{
	int p;

	p = ft_iterative_power(4, -2);
	printf("%d\n", p); 
}
