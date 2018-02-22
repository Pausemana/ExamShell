/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luman <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 19:53:38 by luman             #+#    #+#             */
/*   Updated: 2018/02/22 20:00:02 by luman            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	int a;
	int b;

	a = 'a';
	b = 'B';
	while (a <= 'y' && b <= 'Z')
	{
		ft_putchar(a);
		ft_putchar(b);
		a = a + 2;
		b = b + 2;
	}
	ft_putchar('\n');
	return (0);
}
