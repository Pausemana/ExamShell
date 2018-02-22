/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luman <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 07:29:09 by luman             #+#    #+#             */
/*   Updated: 2018/02/22 07:34:03 by luman            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	char a;
	char b;

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
