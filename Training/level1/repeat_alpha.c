/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luman <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 21:50:49 by luman             #+#    #+#             */
/*   Updated: 2018/02/22 22:45:36 by luman            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	ft_repeat_alpha(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i]) 
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			j = str[i] - 65;
			while (j >= 0)
			{
				ft_putchar(str[i]);
				j--;
			}
		}
		else if (str[i] >= 'a' && str[i] <= 'z')
		{
			j = str[i] - 97;
			while (j >= 0)
			{
				ft_putchar(str[i]);
				j--;
			}
		}
		else
		{
			ft_putchar(str[i]);
		}
		i++;
	}
	ft_putchar('\n');
	return (*str);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_repeat_alpha(argv[1]);
	}
	else
	{
		ft_putchar('\n');
	}
	return (0);
}
