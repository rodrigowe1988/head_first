/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testeando.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roweber <roweber@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 14:51:00 by roweber           #+#    #+#             */
/*   Updated: 2021/08/18 19:21:59 by roweber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	encrypt(char *message);

int	main(void)
{
	encrypt("Meu nome");
	return (0);
}

void	encrypt(char *message)
{
	while (*message != '\0')
	{
		*message = *message ^ 31;
		message++;
	}
}
