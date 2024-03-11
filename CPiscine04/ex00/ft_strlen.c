/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 21:41:17 by marmarti          #+#    #+#             */
/*   Updated: 2024/02/27 21:52:23 by marmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n])
	{
		n++;
	}
	return (n);
}

/*int	main(void)
{
	char *str = "Hola mundo";
	int res = ft_strlen(str);
	printf("Contiene %d caracteres", res);
	return (0);
}*/
