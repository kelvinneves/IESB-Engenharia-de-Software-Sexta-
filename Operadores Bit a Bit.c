#include <stdio.h>
#include <locale.h> 

void op1(int, int);
void op2(int, int);
void op3(int, int);
void op4(int, int);
void op5(int, int);
void banner();

char entrada;
char saida[32], temp1[32], temp2[32], temp3[32];

int main() {
setlocale(LC_ALL, "Portuguese");
banner();
}

void banner() {
	int valor1 = 13;
	int valor2 = 3;
	printf("Encontro 13 - Javascript para C\n");
	printf("Trabalhando com lógica bit a bit\n");
	printf("\nValor A : %d", valor1);
	printf("\nValor B : %d", valor2);
	label:
	printf("\n\nDigite :\n\n");
	printf("1)OR\n2)AND\n3)XOR\n4)Deslocar para esquerda\n5)Deslocar para a direita\n\nEntrada: ");
	scanf("%c", &entrada);
	system("cls");
		if (entrada == '1') {
			op1(valor1, valor2);
		} else if ( entrada == '2') {
			op2(valor1, valor2);
		} else if ( entrada == '3') {
			op3(valor1, valor2);
		} else if ( entrada == '4') {
			op4(valor1, valor2);
		} else if ( entrada == '5') {
			op5(valor1, valor2);
		} else {
			system("cls");
			printf("Entrada não encontrada\nTente novamente\n\n");
			goto label;
		}
}

void op1(int a, int b) {
itoa((a|b),saida,2);		//Converter o resultado para binário
itoa(a, temp1, 2);		//Converter A para binário
itoa(b, temp2, 2);		//Converter B para binário
printf("%d (%08s) OR %d (%08s) = %d (%08s)\n", a, temp1, b, temp2, (a|b), saida);
}

void op2(int a, int b) {
itoa((a&b),saida,2);		//Converter o resultado para binário
itoa(a, temp1, 2);		//Converter A para binário
itoa(b, temp2, 2);		//Converter B para binário
printf("%d (%08s) AND %d (%08s) = %d (%08s)\n", a, temp1, b, temp2, (a&b), saida);
}

void op3(int a, int b) {
itoa((a^b),saida,2);		//Converter o resultado
itoa(a, temp1, 2);		//Converter A para binário
itoa(b, temp2, 2);		//Converter B para binário
printf("%d (%08s) XOR %d (%08s) = %d (%08s)\n", a, temp1, b, temp2, (a^b), saida);
}

void op4(int a, int b) {
itoa((a<<b),saida,2);		//Converter o resultado para binário
itoa(a, temp1, 2);		//Converter A para binário
itoa(b, temp2, 2);		//Converter B para binário
printf("%d (%08s) << %d (%08s) = %d (%08s)\n", a, temp1, b, temp2, (a<<b), saida);
}

void op5(int a, int b) {
itoa((a>>b),saida,2);		//Converter o resultado para binário
itoa(a, temp1, 2);		//Converter A para binário
itoa(b, temp2, 2);		//Converter B para binário
printf("%d (%08s) >> %d (%08s) = %d (%08s)\n", a, temp1, b, temp2, (a>>b), saida);
}
