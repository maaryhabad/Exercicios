#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "Lista1Vini.h"
#include "Lista1Carvilhe.h"
#include "Vetores.h"

void menuVetores() {
	printf("Exercícios Vetores\n");
	system("cls");
	printf("Exercicio 1\nExercicio 2\nExercicio 3\nExercicio 4\nExercicio 5\n");
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
			vetor1();
			system("pause");
			break;

		case '2':
			system("cls");
			printf("Exercicio 2.");
			vetor2();
			system("pause");
			break;

		case '3':
			system("cls");
			printf("Exercicio 3.");
			vetor3();
			system("pause");
			break;

		case '4':
			system("cls");
			printf("Exercicio 4.");
			Ex4Carvilhe();
			system("pause");
			break;

		case '5':
			system("cls");
			printf("Exercicio 5.");
			Ex5Carvilhe();
			system("pause");
			break;

		case '6':
			system("cls");
			printf("Exercicio 6.");
			Ex6Carvilhe();
			system("pause");
			break;

		case '7':
			system("cls");
			printf("Exercicio 7.");
			Ex7Carvilhe();
			system("pause");
			break;

		case '8':
			system("cls");
			printf("Exercicio 8.");
			Ex8Carvilhe();
			system("pause");
			break;

		case 'q':
			printf("Sair\n");
			system("pause");
			break;
		}
	}
}
void vetor1() {
	int x[4] = { 1, 2, 3, 4 };

	for (int i = 0; i < 4; i++) {
		x[i] = x[3 - i] * 3;
		printf("%d\n", i);
	}
	system("pause");
	system("cls");
}
void vetor2() {
	int cont[10] = { };
	int x;

	for (int i = 0; i < 20; i++) {
		do {
			printf("Digite o valor da posição %d: ", i);
			scanf_s("%d", &x);
		} while (x > 10 || x < 1);
		cont[x - 1] = cont[x - 1] +1;
	} 
	for (int i = 0; i < 10; i++) {
		printf("%d : %d  ", i + 1, cont[i]);
	}	
}
void vetor3() {
	int indices[] = { 5, 0, 2, 3, 0, 4, 0, 7, 0, 1, 0, 6 };
	char letras[] = {'a', 'b', 'r', 'i', 'n', 'm', 'd', ' ' };
	char x;

	for (int i = 0; i < 13; i++) {
		printf("%d \n", indices);
		x = letras[indices[i]];
		printf("%c", x);
	}
}