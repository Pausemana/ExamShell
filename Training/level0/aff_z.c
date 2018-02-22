/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_z.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luman <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 07:36:06 by luman             #+#    #+#             */
/*   Updated: 2018/02/22 07:45:16 by luman            ###   ########.fr       */
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
		ft_putchar('z');
		ft_putchar('\n');
		return (0);
	}
	while (argv[1][i] != 'z' && argv[1][i])
		i++;
	if (argv[1][i] == 'z')
		ft_putchar('z');
	ft_putchar('\n');
	return (0);
}
