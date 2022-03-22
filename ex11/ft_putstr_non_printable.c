/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagnaou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 18:55:30 by yagnaou           #+#    #+#             */
/*   Updated: 2021/07/05 09:46:50 by yagnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_char(char	i)
{
	write(1, &i, 1);
}

int	print_printable(char	j)
{
	if (j >= ' ' && j != 127)
	{
		return (1);
	}
	return (0);
}

void	ft_putstr_non_printable(char	*str)
{
	int				k;
	unsigned char	cr;

	k = 0;
	while (str[k])
	{
		cr = str[k];
		if (print_printable(cr))
			print_char(cr);
		else
		{
			print_char('\\');
			print_char("0123456789abcdef"[cr / 16]);
			print_char("0123456789abcdef"[cr % 16]);
		}
		k++;
	}
}
