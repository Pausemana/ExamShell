/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luman <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 22:46:24 by luman             #+#    #+#             */
/*   Updated: 2018/02/22 23:23:06 by luman            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	else
		while (argv[1][i] != '\0')
		{
			i++;
		}
		i = i -1;
		while (i >= 0)
		{
			ft_putchar(argv[1][i]);
			i--;			
		}
		ft_putchar('\n');
		return (0);
}
