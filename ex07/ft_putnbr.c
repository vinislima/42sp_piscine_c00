/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinda-si <vinda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 16:39:17 by vinda-si          #+#    #+#             */
/*   Updated: 2024/11/02 16:17:22 by vinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// nesta função iremos imprimir os números
// utilizando a função de imprimir caracter
// além da recurssão
// prototipamos as funções no início
void	ft_putnbr(int nb);
void	ft_putchar(char c);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	// começamos realizando um teste de limites de inteiros
	if (nb < -2147483648 || nb > 2147483647)
		// se o teste for atendido, ou seja um valor que
		// ultrapassa os limites
		// o programa retorna o controle para o usuário
		// neste caso sem nada, porque é uma função vazia
		return ;
	// se o número informado for no limite inferior do inteiro
	// ele receberá um tratamento separado
	if (nb == -2147483648)
	{
		// utilizando a divisão, conseguimos "excluir" o ultimo digito
		// realizamos isso devido a limitação de tamanho
		ft_putnbr(nb / 10);
		// como sabemos que o limite inferior têm o número oito como final
		// já passamos isso para a função de impressão
		ft_putchar('8');
	}
	// caso o primeiro teste não seja verdadeiro, caimos neste outro caso
	else
	{
		// testamos para os números negativos
		if (nb < 0)
		{
			// caso ocorra, realizasmo a passagem do sinal para a
			// função de impressão
			ft_putchar('-');
			// e realizamos a transformação do valor para positivo
			// pois é mais fácil trabalhar com ele desta forma
			// de maneira recursiva, onde a função realiza a chamada dela mesma
			ft_putnbr(-nb);
		}
		else
		{
			// em caso de números de dois digitos positivos
			if (nb > 9)
				// realizamos a passagem do ultimo digito
				// de maneira recursiva
				ft_putnbr(nb / 10);
			// aqui utilizando a manipulação da tabela ascii,
			// alcançamos o valor do digito na tabela 
			ft_putchar('0' + (nb % 10));
		}
	}
}

// // início da main
// #include <unistd.h>

// void	ft_putnbr(int nb);

// int main()
// {
// 	// chamamos a função várias vezes para testa-la de diferentes formas
// 	ft_putnbr(-2147483648);
// 	// utilização do write para imprimir quebra de linha
// 	write(1, "\n", 2);
// 	ft_putnbr(2147483647);
// 	write(1, "\n", 2);
// 	ft_putnbr(48);
// 	write(1, "\n", 2);
// }