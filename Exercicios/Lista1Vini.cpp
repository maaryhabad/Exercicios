#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <iostream>
#include <locale.h>
#include "Lista1Vini.h"

using namespace std;

int numberOne, numberTwo, numberThree, tempor;

void MenuVini() {
	
	int numberOfEx = 6;
	printf("Exercícios Vinícius\n");
	system("cls");
	for (int i = 0; i < numberOfEx; i++) {
		cout << "Exercício " << i + 1 << endl;
	}
	char command = getchar();
	bool repeatLoop = true;
	//while ((command != '1') && (command != '2') && (command != '3') && (command != '4') && (command != 'q'))
	while (repeatLoop)
	{
		repeatLoop = false;
		command = getchar();
		switch (command)
		{

		case '1':
			system("cls");
			printf("Exercicio 1.");
			Ex1Vini();
			system("pause");
			break;

		case '2':
			system("cls");
			printf("Exercicio 2.");
			Ex2Vini();
			system("pause");
			break;

		case '3':
			system("cls");
			printf("Exercicio 3.");
			Ex3Vini();
			system("pause");
			break;

		case '4':
			system("cls");
			printf("Exercicio 4.");
			Ex4Vini();
			system("pause");
			break;

		case '5':
			system("cls");
			printf("Exercicio 5.");
			Ex5Vini();
			system("pause");
			break;

		case '6':
			system("cls");
			printf("Exercicio 6.");
			Ex6Vini();
			system("pause");
			break;

		case '7':
			system("cls");
			printf("Exercicio 7.");
			Ex7Vini();
			system("pause");
			break;

		case '8':
			system("cls");
			printf("Exercicio 8.");
			Ex8Vini();
			system("pause");
			break;

		case '9':
			system("cls");
			printf("Exercicio 9.");
			Ex9Vini();
			system("pause");
			break;

		case 'q':
			printf("Sair\n");
			system("pause");
			break;
		}
	}
}
void Ex1Vini() {
	int numberOne = 0;
	int numberTwo = 0;
	printf(" Faça um programa que leia 2 números e diga qual deles é o maior.\n\n");
	printf("Insira um número (numberOne): ");
	scanf_s("%d", &numberOne);
	printf("Insira um número (numberTwo): ");
	scanf_s("%d", &numberTwo);
	if (numberOne > numberTwo) {
		printf("O número maior é: %d\n", numberOne);
	}
	if (numberOne = numberTwo) {
		printf("Os números são iguais\n");
	}
	else {
		printf("O número maior é: %d\n", numberTwo);
	}
	system("pause");
	system("cls");
}
void Ex2Vini() {
	int numberOne = 0;
	int numberTwo = 0;
	printf(" Faça um programa que leia dois números nas variáveis a e b. Se o valor de a for maior que o de b, troque o valor de a e b. Em seguida, mostre as variáveis a e b.\n\n");
	printf("Insira um número (numberOne): ");
	scanf_s("%d", &numberOne);
	printf("Insira um número (numberTwo): ");
	scanf_s("%d", &numberTwo);
	if (numberOne > numberTwo) {
		printf("Número 1: %d\n", numberTwo);
		printf("Número 2: %d\n", numberOne);
	}
	else
	{
		printf("Número 1 é menor que Número 2");
	}
	system("pause");
	system("cls");
}
void Ex3Vini() {
	int numberOne = 0;
	int numberTwo = 0;

	printf(" Com base no exercício anterior, faça um programa que leia 3 números e mostre-os em ordem crescente\n\n");
	printf("Insira um número (numberOne): ");
	scanf_s("%d", &numberOne);
	printf("Insira um número (numberTwo): ");
	scanf_s("%d", &numberTwo);
	printf("Insira um número (numberThree): ");
	scanf_s("%d", &numberThree);
	if (numberOne > numberTwo) {
		tempor = numberOne;
		numberOne = numberTwo;
		numberTwo = tempor;
	}
	if (numberTwo > numberThree) {
		tempor = numberTwo;
		numberTwo = numberThree;
		numberThree = tempor;
	}
	if (numberOne > numberTwo) {
		tempor = numberOne;
		numberOne = numberTwo;
		numberTwo = tempor;
	}

	printf("Ordem crescente: %d, %d, %d\n", numberOne, numberTwo, numberThree);
	system("pause");
	system("cls");
}
void Ex4Vini() {
	int C, D, E;
	double delta, Y, pos, neg;
	printf(" Faça um programa que leia os valores de C, D e E e calcule as raízes de uma equação de segundo grau formada por ax^2 + bx + c\n");
	printf("Digite o valor de C: ");
	scanf_s("%d", &C);
	printf("Digite o valor de D: ");
	scanf_s("%d", &D);
	printf("Digite o valor de E: ");
	scanf_s("%d", &E);
	delta = D*D - 4 * C*E;
	Y = sqrt(delta);
	pos = (-D + Y) / (2 * C);
	neg = (-D - Y) / (2 * C);
	printf("delta = %lf\n", delta);

	if (C == 0 || delta < 0) {
		printf("Não é possível concluir o cálculo. Valor de C = 0\n");
	}
	else
	{
		printf("As raízes são: %lf, %lf\n", pos, neg);
	}
	system("pause");
	system("cls");
}
void Ex5Vini() {
	int ano1, ano2, mes1, mes2, dia1, dia2;

	printf(" Faca um programa que pergunte duas datas (dia, mes e ano) e diga se a primeira data é anterior, posterior ou igual a segunda");
	printf("Primeira data: %d, %d, %d", &dia1, &mes1, &ano1);
	printf("Segunda data: %d, %d, %d", &dia2, &mes2, &ano2);

	if (ano1 < ano2) {
		printf("A primeira data é anterior a segunda.");
	}
	else if (ano1 > ano2) {
		printf("A primeira data é posterior a segunda");
	}

	else {
		if (mes1 < mes2)
		{
			printf("A primeira data é anterior a segunda");
		}
		else if (mes1 > mes2) {
			printf("A primeira data é posterior a segunda");
		}
		else
		{
			if (dia1 > dia2) {
				printf("A primeira data é posterior a segunda");
			}
			else if (dia1 < dia2) {
				printf("A primeira data é anterior a segunda");
			}
			else
			{
				printf("As datas são iguais");
			}
		}
	}
	system("pause");
	system("cls");
}
void Ex6Vini() {
	printf("Faca um programa que leia um numero positivo e mostre todos os numeros inferiores aquele numero a partir do 0. Por exemplo, ao ler 5, o programa deve exibir 0, 1, 2, 3, 4.");
	int number;
	int cont = 0;
	printf("Digite um numero: ");
	scanf("%d", &number);
	while (cont < number) {
		printf("%d\n", number);
		cont = cont + 1;
	}
}
void Ex7Vini() {
	printf("Faca um programa que leia um numero e calcule seu fatorial. Lembre-se que 4! = 4*3*2*1 e 0!=1");
	int numeroLido;
	int inicio = 0;
	while (inicio < numeroLido) {
		printf("%d*", inicio);
		inicio = inicio + 1;
	}
}
void Ex8Vini() {
	printf("Faca um programa que leia um numero N, e calcule os N termos da sequencia de fibonacci. A sequencia inicia com 1 e 1 e cada numero adicional e formado pela soma dos dois anteriores. Por exemplo, se o numero informado for 6, seu programa deve exibir: 1, 1, 2, 3, 5, 8");
}
void Ex9Vini() {
	printf("Faça um programa que teste se um número se enquadra na conjectura de collatz. A conjectura diz o seguinte. \nSe o número n informado for par, o próximo da sequencia será x / 2. \nSe for ímpar, o próximo será 3x + 1.\nA sequencia terminará sempre em 4, 2, 1. \nPor exemplo, se o usuário informar o número 5, o programa calculará 5, 16, 8, 4, 2, 1 e parará.");
}
void Ex10Vini() {
	printf("Faça um programa em que o usuário informe uma altura e uma largura, e desenhe um retângulo com base nessa altura. Por exemplo, se o usuário informar altura 3 e largura 5, a saída será:\n##### \n##### \n#####");
}
void Ex11Vini() {
	printf("Faça um programa em que o usuário informe uma altura, e desenhe um triângulo com base nessa altura. Por exemplo, se a altura informada for 4 o programa deve desenhar:\n* \n** \n*** \n****");
}
void Ex12Vini() {
	printf("Faça um programa em que o usuário informe uma altura e largura, e desenhe um 'tabuleiro de damas'. Por exemplo, se o usuário informar altura 5 e largura 5 o programa desenhará: \n# # # # # \n # # # # # \n# # # # # \n # # # # # \n# # # # #");
}
void Ex13Vini() {
	printf("Faça um programa chamado Tabuada que calcule e exiba a tabela.");
}