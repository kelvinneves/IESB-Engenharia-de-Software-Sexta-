#include <stdio.h>
#include <iostream>
#include <locale.h> 

using namespace std;
void op1(int, int);
void op2(int, int);
void op3(int, int);
void op4(int, int);
void op5(int, int);

void banner();
int entrada;
int saida;

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
	char c = cin.get();
	if (c == '1') {
		op1(valor1, valor2);
	} else if ( c == '2') {
		op2(valor1, valor2);
	} else if ( c == '3') {
		op3(valor1, valor2);
	} else if ( c == '4') {
		op4(valor1, valor2);
	} else if ( c == '5') {
		op5(valor1, valor2);
	} else {
		system("cls");
		printf("Entrada não encontrada\nTente novamente\n\n");
		goto label;
	}
}

void op1(int a, int b) {
system("cls");
printf("Resultado entre %d | %d = %d\n", a, b, (a|b));
}

void op2(int a, int b) {
system("cls");
printf("Resultado entre %d & %d = %d\n", a, b, (a&b));
}

void op3(int a, int b) {
system("cls");
printf("Resultado entre %d xor %d = %d\n", a, b, (a^b));
}

void op4(int a, int b) {
system("cls");
printf("Resultado entre %d & %d = %d\n", a, b, (a<<b));
}

void op5(int a, int b) {
system("cls");
printf("Resultado entre %d & %d = %d\n", a, b, (a>>b));
}
