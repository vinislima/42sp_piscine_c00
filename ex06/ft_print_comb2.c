/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinda-si <vinda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 08:42:53 by vinda-si          #+#    #+#             */
/*   Updated: 2024/11/02 16:17:09 by vinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// nesta função serão impressos duplas de números
// iniciando a primeira em 00 e a segunda em 01
// incrementando até o limite de noventa e oito e noventa e nove respectivamente

// aqui realizamos a prototipação das funções 
void	ft_print_comb2(void);
void	ft_change_first_duo(int first_duo);
void	ft_change_second_duo(int second_duo);
// nesta função é realizada a a conversão, impressão e imcremento
// da primeira dupla de números, ela recebe 
void	ft_change_first_duo(int first_duo)
{
	// estas variáveis serão usadas para armazenar
	// os valores em forma de caracteres
	char	first_div;
	char	first_rest;

	// nesta conta conseguimos separar o digito da casa da dezena
	// somamos o valor de '0' para manipular a tabela ascii
	// e alcançar o valor do digito nela
	first_div = first_duo / 10 + '0';
	// aqui é o mesmo mas para a casa da unidade
	first_rest = first_duo % 10 + '0';
	// utilizamos esses write para a impressão
	write(1, &first_div, 1);
	write(1, &first_rest, 1);
	// aqui é realizado a impressão do espaço entre as duplas
	write(1, " ", 1);
}
// a mesma coisa que a função anterior para a realização
// da transformação da segunda dupla de números
void	ft_change_second_duo(int second_duo)
{
	char	second_div;
	char	second_rest;

	second_div = second_duo / 10 + '0';
	second_rest = second_duo % 10 + '0';
	write(1, &second_div, 1);
	write(1, &second_rest, 1);
}
// está é a função principal
void	ft_print_comb2(void)
{
	// declaramos dois inteiros para
	// receber os valores das duplas
	int	first_duo;
	int	second_duo;
	// realizamos novamente um laço de repetição
	// iniciando em zero, até o limite de noventa e oito
	first_duo = 0;
	while (first_duo <= 98)
	{
		// neste segundo iniciamos em um a mais do que o primeiro
		// limitado até noventa e nove
		second_duo = first_duo + 1;
		while (second_duo <= 99)
		{
			// dentro deste laço chamamos as duas funções criadas anteriormente
			ft_change_first_duo(first_duo);
			ft_change_second_duo(second_duo);
			// esse teste segue a impressão da virgula
			if (first_duo != 98 || second_duo != 99)
				write(1, ", ", 2);
			// após isso a segunda variável será incrementada
			second_duo++;
		}
		// saindo do segundo laço a primeira variável é incrementada
		first_duo++;
	}
}

// void	ft_print_comb2(void);

// int	main(void)
// {
// 	ft_print_comb2();
// 	return (0);
// }