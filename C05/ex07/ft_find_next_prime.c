/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toandrad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 14:31:54 by toandrad          #+#    #+#             */
/*   Updated: 2025/02/04 14:42:35 by toandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 3;
	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	if (nb % 2 == 0)
		return (0);
	while (i <= nb / 2)
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	next;

	next = nb + 1;
	while (!ft_is_prime(next))
		next++;
	return (next);
}

/* #include <stdio.h>
int main(void) 
{
    int num = 29;
    printf("Next prime number to %d is %d\n", num, ft_find_next_prime(num));
    
    num = 15;
    printf("Next prime number to %d is %d\n", num, ft_find_next_prime(num));

    num = 2;
    printf("Next prime number to %d is %d\n", num, ft_find_next_prime(num));
} */