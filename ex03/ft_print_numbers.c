/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinda-si <vinda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 19:18:59 by vinda-si          #+#    #+#             */
/*   Updated: 2024/11/02 16:14:05 by vinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void);

void	ft_print_numbers(void)
{
	// seguimos a mesma idéia, mas aqui para percorrer os digitos
	// declaramos a variável do tipo char
	char	numeros;
	// atribuímos o valor de caractere zero a variável
	numeros = '0';
	// o laço de repetição ocorrerá enquanto
	// o valor de números for menor ou igual
	// ao caractere novo
	while (numeros <= '9')
	{
		// a função write ira imprimir o conteúdo da memória
		// de número
		write (1, &numeros, 1);
		// após isso o valor armazenado em número é
		// incrementado em um
		numeros = numeros + 1;
	}
}

// void	ft_print_numbers(void);

// int main()
// {
// 	ft_print_numbers();
// 	return (0);
// }
