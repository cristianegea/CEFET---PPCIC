/* Programa para conversão de temperatura de Celsius para Farenheit*/

/* Arquivo-fonte */
#include <stdio.h>

/* Função auxiliar */
float convert (float c)
{
    float f;
    f = 1.8*c + 32;
	return f;
}

/* Função principal */
int main (void)
{
	float t1;
	float t2;
	/* mostra mensagem para o usuário */
	printf("Digite a temperatura em Celsius: ");
	/* Captura valor entrado via teclado */
	scanf("%f", &t1);
	/* faz a conversão, chamando função auxiliar */
	t2 = converte(t1);
	/* exibe resultado */
	printf("Temperatura em Fahrenheit: %f\n", t2);
}