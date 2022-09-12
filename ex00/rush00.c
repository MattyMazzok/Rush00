/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmazzocc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 09:15:54 by mmazzocc          #+#    #+#             */
/*   Updated: 2022/09/11 02:07:56 by mmazzocc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	stampa_linea(int larghezza, char angolo, char riempimento)
{
	int	tmp;

	tmp = 0;
	while (tmp < larghezza)
	{
		if (tmp == 0 || tmp == larghezza - 1)
		{
			ft_putchar(angolo);
		}
		else
		{
			ft_putchar(riempimento);
		}
		tmp++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	tmp;

	tmp = 0;
	if ((x > 0 && y > 0) || x <= 0 || y <= 0)
	{
		write(1, "You have entered a wrong number, retry!", 39);
	}
	else
	{
		while (tmp < y)
		{
			if (tmp == 0 || tmp == y - 1)
			{
				stampa_linea(x, 'o', '-');
			}
			else
			{
				stampa_linea(x, '|', ' ');
			}
			tmp++;
		}
	}
}
