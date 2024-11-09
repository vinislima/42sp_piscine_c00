/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinda-si <vinda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 17:42:24 by vinda-si          #+#    #+#             */
/*   Updated: 2024/08/18 11:41:45 by vinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// inclusão da biblioteca
#include <unistd.h>

// prototipagem da função
// nesse caso uma função sem retorno, vazia
// que vai receber um variável do tipo char
void	ft_putchar(char c);

// aqui é o desenvolvimento da função
void	ft_putchar(char c)
{
	// aqui ela vai utilizar a função write para imprimir o caracter
	// a saída 1, é a saída padrão, utilizando o "&" para imprimir o caracter
	// o outro digito corresponde a quantidade de bytes que serão impressos
	write(1, &c, 1);
}

// aqui é a criação do main
// prototipamos a função
void	ft_putchar(char c);

// // declaramos o início do main
// int main()
// {
// 	// chamamos a função e passamos o que ela espera receber
// 	ft_putchar('A');
// 	// por padrão o retorno de sucesso na main é zero
// 	return (0);
// }
