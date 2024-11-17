# C 00

The "C 00" project introduces foundational programming concepts in C, targeting beginners. The exercises focus on creating basic functions, such as printing characters, numbers, and combinations of digits, adhering to strict coding norms. Tasks include writing functions to display the alphabet in various orders, checking number signs, and generating formatted outputs like number combinations. The project uses the write function exclusively, ensuring a low-level understanding of output handling. It aims to instil discipline coding habits and a grasp of fundamental programming logic while encouraging collaborative learning and peer evaluation.

This project serves as an introduction to fundamental C programming concepts, focusing on loops, conditionals, recursion, and adhering to coding standards.

- **`ft_putchar`** - Outputs a single character using the write function, providing a basic understanding of low-level character handling.
- **`ft_print_alphabet`** - Displays the lowercase alphabet in ascending order, introducing loops and sequential character manipulation.
- **`ft_print_reverse_alphabet`** - Outputs the lowercase alphabet in descending order, building on previous logic with reversed sequences.
- **`ft_print_numbers`** - Prints all digits (0-9) in ascending order, reinforcing loop structures and number handling.
- **`ft_is_negative`** - Outputs 'N' for negative integers and 'P' for positive or zero, introducing conditional statements and integer evaluation.
- **`ft_print_comb`** - Displays all unique combinations of three different digits in ascending order, teaching nested loops and formatting.
- **`ft_print_comb2`** - Outputs all combinations of two numbers (00 to 99) in ascending order, showcasing nested loops and paired number formatting.
- **`ft_putnbr`** - Prints an integer, including handling edge cases like the minimum and maximum values for int, emphasising recursion and formatting.
- **`ft_print_combn`** - Outputs all combinations of n digits (1 ≤ n ≤ 9) in ascending order, requiring advanced iteration and condition checks.
<details>
	<summary>Exercises:</summary>

- [ex00:](https://github.com/vinislima/42sp_piscine_c00/tree/main/ex00)
    
    ```c
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
    ```
    
- [ex01:](https://github.com/vinislima/42sp_piscine_c00/tree/main/ex01)
    
    ```c
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
    ```
    
- [ex02:](https://github.com/vinislima/42sp_piscine_c00/tree/main/ex02)
    
    ```c
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
    ```
    
- [ex03:](https://github.com/vinislima/42sp_piscine_c00/tree/main/ex03)
    
    ```c
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
    ```
    
- [ex04:](https://github.com/vinislima/42sp_piscine_c00/tree/main/ex04)
    
    ```c
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
    ```
    
- [ex05:](https://github.com/vinislima/42sp_piscine_c00/tree/main/ex05)
    
    ```c
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
    ```
    
- [ex06:](https://github.com/vinislima/42sp_piscine_c00/tree/main/ex06)
    
    ```c
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
    ```
    
- [ex07:](https://github.com/vinislima/42sp_piscine_c00/tree/main/ex07)
    
    ```c
    
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
    
    ```
</details>