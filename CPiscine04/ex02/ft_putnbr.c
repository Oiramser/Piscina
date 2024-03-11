/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 12:14:34 by marmarti          #+#    #+#             */
/*   Updated: 2024/02/29 17:30:06 by marmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putnbr(int nb)
{
	int	i;
	int digit;
	char *array;

	i = 0;
	while(nb)
	{
		digit = nb % 10;
		array[i++] = digit + '0';
		nb /= 10;
		while(array[i] != '\0')
		{
		write(1, &array, 1);
		i++;
		}
	}
}

int main(void)
{
int num = 5688;

ft_putnbr(num);
return 0;
}
