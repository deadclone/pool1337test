/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marouane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 11:39:10 by marouane          #+#    #+#             */
/*   Updated: 2023/08/12 11:39:17 by marouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{
	int tmp;

	if (*b)
	{
		tmp = *a;
		*a = *a / *b;
		*b = tmp % *b;
	}
}

int main()
{
	int a, b;
	
	a = 42;
	b = 21;
	ft_ultimate_div_mod(&a, &b);
	printf("%d | %d" , a, b);
}
