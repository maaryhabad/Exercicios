#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <iostream>
#include "Soft.h"

using namespace std;

int numberofEx;

void menuSoft() {

	numberofEx = 1;
	system("cls");
	printf("Bem vindo ao menu OBI!\nEscolha seu exercício\n");
	for (int i = 0; i < numberofEx; i++) {
		cout << "Exercício " << i + 1 << endl;
	}
	bool repeatLoop = true;
	char command = getchar();
	while (repeatLoop)
	{
		repeatLoop = false;
		command = getchar();
		switch (command)
		{

		case '1':
			system("cls");
			printf("Exercicio 1.");
			ex1();
			system("pause");
			break;
		}
	}
}
void ex1() {
	int a;
	int b;
	int c;

	printf("Escreva um algoritmo que solicita ao usuário 3 valores inteiros via teclado e depois exibe os números fornecidos.\n");
	printf("Escreva o primeiro numero: ");
	scanf("%d\n", &a);
	printf("Escreva o segundo numero: ");
	scanf("%d\n", &b);
	printf("Escreva o terceiro numero: ");
	scanf("%d\n", &c);
	
	printf("%d, %d, %d", a, b, c);
}