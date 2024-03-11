/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 21:53:17 by marmarti          #+#    #+#             */
/*   Updated: 2024/02/28 12:10:35 by marmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	int		i;
	char	*aux;

	i = 0;
	aux = str;
	while (aux[i] != '\0')
	{
		write(1, &aux[i], 1);
		i++;
	}
}

/*int	main(void)
{
char *str = "Hola mundo";
ft_putstr(str);
return (0);
}
*/
