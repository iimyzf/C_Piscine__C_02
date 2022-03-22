/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagnaou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 12:40:05 by yagnaou           #+#    #+#             */
/*   Updated: 2021/07/05 19:52:20 by yagnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char	*str)
{
	int	i;

	i = 0;
	ft_strlowcase(str);
	while (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			str[i + 1] = str[i + 1];
		else if (str[i] >= 'a' && str[i] <= 'z')
			str[i + 1] = str[i + 1];
		else if (str[i] >= 'A' && str[i] <= 'Z')
			str[i + 1] = str[i + 1];
		else
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] = str[i + 1] - 32;
		}
		i++;
	}
	return (str);
}
