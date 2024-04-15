#include <conio.h>
#include <stdio.h>

//Conta de adição, subtração, multiplicação e divisão. FAM 2020

int main (){
	
	int operacao, erro;
	float resultado, num1, num2;
	
	printf("Digite o primeiro numero:  \n");
	scanf("%f", &num1);
	
	printf("Digite o segundo numero: \n");
	scanf("%f", &num2);
	
	printf("Digite a operacao desejada:\n1.Adicao\n2.Subtracao\n3.Multiplicacao\n4.Divisao\n\n");
	scanf("%d", &operacao);
	
	printf("Opcao escolhida: %d\n", operacao);
	
	switch (operacao)
	{
		case 1:
			{
		        resultado = num1 + num2;
			    printf("O resultado da adicao e: %.2f", resultado);
			    break;
			}
			
			
		case 2:
			{
				resultado = num1 - num2;
			    printf("O resltado da subtracao e: %.2f", resultado);
			    break;
			}
			
			
		case 3:
			{
				resultado = num1 * num2;
			    printf("O resultado da multiplicacao e: %.2f", resultado);
			    break;
			}
			
			
		case 4:
			{
			    resultado = num1 / num2;
			    printf("O resultado da divisao e: %.2f", resultado);
			    break;
			}
			
		default:
			{
				printf("Opcao invalida\n");
				erro=0;
			}
			
			
	} while (erro==0);
	
	return 0;
}