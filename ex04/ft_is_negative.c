/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinda-si <vinda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 15:22:26 by vinda-si          #+#    #+#             */
/*   Updated: 2024/08/19 11:10:57 by vinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n);

void	ft_is_negative(int n)
{
	// aqui temos um teste condicional
	// se a condição colocada nele for verdadeira
	// se entra nele e é realizado o comando
	// neste caso se o inteiro recebido for menor que zero
	if (n < 0)
		// neste caso como só há um comando
		// não é necessário a inclusão de {}
		write(1, "N", 1);
	// se a primeira condição não for verdadeira,
	// é executa o que estiver na sequência
	else
		write(1, "P", 1);
}

// void	ft_is_negative(int n);

// int main()
// {
// 	// chamamos a função e passamos o inteiro
// 	// que será testado
// 	ft_is_negative(10);
// 	ft_is_negative(-10);
// 	ft_is_negative(0);
// 	return (0);
// }