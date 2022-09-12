/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmazzocc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 09:52:15 by mmazzocc          #+#    #+#             */
/*   Updated: 2022/09/11 02:19:06 by mmazzocc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	stampa_linea(int larghezza, char angolo, char riempimento, char angolo2)
{
	int	tmp;

	tmp = 0;
	while (tmp < larghezza)
	{
		if (tmp == 0)
		{
			ft_putchar(angolo);
		}
		else if (tmp == larghezza - 1)
		{
			ft_putchar(angolo2);
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
	if (x <= 0 || y <= 0 || (x > 0 && y > 0))
		write(1, "You have entered a wrong number, retry!", 39);
	else
	{
		while (tmp < y)
		{
			if (tmp == 0)
			{
				stampa_linea(x, 'A', 'B', 'A');
			}
			else if (tmp == y - 1)
			{
				stampa_linea(x, 'C', 'B', 'C');
			}
			else
			{
				stampa_linea(x, 'B', ' ', 'B');
			}
			tmp++;
		}
	}
}
