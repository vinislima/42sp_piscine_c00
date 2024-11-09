/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinda-si <vinda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 16:58:20 by vinda-si          #+#    #+#             */
/*   Updated: 2024/08/18 19:44:04 by vinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// nesse caso a função será sem retorno
// e também será uma função sem parâmetros
void	ft_print_alphabet(void);

void	ft_print_alphabet(void)
{
	// aqui declaramos uma variável do tipo char
	char	letras;
	// realizamos a atribuição na variável
	letras = 'a';
	// usamos um laço de repetição
	// ele ira repetir enquanto a condição for verdadeira
	// neste caso enquanto a "valor" de letras for menor ou igual a "z"
	while (letras <= 'z')
	{
		// usamos novamente a função write
		write (1, &letras, 1);
		// e para percorrermos as "letras", realizamos o incremento de letras
		letras = letras + 1;
	}
}

// void	ft_print_alphabet(void);

// int main()
// {
// 	// aqui como a função não têm retorno
// 	// e não recebe nenhum parâmetro, basta chama-lá
// 	ft_print_alphabet();
// 	return (0);
// }
