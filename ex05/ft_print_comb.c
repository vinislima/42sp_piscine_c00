/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinda-si <vinda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 16:50:10 by vinda-si          #+#    #+#             */
/*   Updated: 2024/08/26 16:57:42 by vinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// nesta função é realizada a impressão de sequência de três números
// iniciando em 012, indo até o limite de 789
// a cada impressão de uma sequência de três números é impressa uma vírgula
// menos ao final das sequências
void	ft_print_comb(void);

void	ft_print_comb(void)
{
	// mesmo sendo números, usaremos caracteres
	char	hundred;
	char	ten;
	char	unit;
	// aqui iremos iniciar uma sequência de laços de repetição
	// neste primeiro iniciaremos em zero até o limite de sete
	hundred = '0';
	while (hundred <= '7')
	{
		// neste iniciamos em um a mais que o primeiro laço
		// limitando até o número oito
		ten = hundred + 1;
		while (ten <= '8')
		{
			// neste iniciamos em um a mais que o segundo laço
			// limitando até o número nove
			unit = ten + 1;
			while (unit <= '9')
			{
				// aqui é realizada impressão dos caracteres númerais
				write(1, &hundred, 1);
				write(1, &ten, 1);
				write(1, &unit, 1);
				// neste teste enquanto a condição for diferente dos testes
				// acontece a impressão da virgula
				if (! (hundred == '7' && ten == '8' && unit == '9'))
					write(1, ", ", 2);
				// aqui ocorre o incremento da unidade, seguindo assim
				// nos demais laços
				unit++;
			}
			ten++;
		}
		hundred++;
	}
}

// void	ft_print_comb(void);

// int	main()
// {
// 	// novamente apenas realizamos a chamada da função
// 	ft_print_comb();
// 	return(0);
// }
