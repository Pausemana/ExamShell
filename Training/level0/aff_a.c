/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luman <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 19:34:48 by luman             #+#    #+#             */
/*   Updated: 2018/02/22 19:44:57 by luman            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc != 2)
		ft_putchar('a');
	while (argv[1][i])
	{
		if (argv[1][i] == 'a')
			ft_putchar('a');
		i++;
	}
	ft_putchar('\n');
	return (0);
}
