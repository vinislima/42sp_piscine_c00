/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinda-si <vinda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 19:03:53 by vinda-si          #+#    #+#             */
/*   Updated: 2024/08/18 19:44:18 by vinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	letras;
	// aqui a idéia é imprimir o alfabeto ao contrário
	// iniciamos pela ultima letra
	letras = 'z';
	// aqui comparamos enquanto letra for menor ou igual a "a"
	while (letras >= 'a')
	{
		write (1, &letras, 1);
		// para percorrer as letras realizamos o decremento de letra
		letras = letras - 1;
	}
}

// void	ft_print_reverse_alphabet(void);

// int main()
// {
// 	ft_print_reverse_alphabet();
// 	return (0);
// }