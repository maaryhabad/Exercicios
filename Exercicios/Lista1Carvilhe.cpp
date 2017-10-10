#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <stdbool.h>
#include <string>
#include <stdlib.h>
#include <ctype.h>
#include <iostream>
#include <stdlib.h>
#include "Lista1Carvilhe.h"


using namespace std;

int numberOfEx;

void MenuCarvilhe() {

	numberOfEx = 8;
	printf("Exercícios Carvilhe\n");
	system("cls");
	for (int i = 0; i < numberOfEx; i++) {
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
			Ex1Carvilhe();
			system("pause");
			break;

		case '2':
			system("cls");
			printf("Exercicio 2.");
			Ex2Carvilhe();
			system("pause");
			break;

		case '3':
			system("cls");
			printf("Exercicio 3.");
			Ex3Carvilhe();
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
void Ex1Carvilhe() {
	bool B1, B2 = false;
	bool B3 = true;

	if (B1 = true) {
		printf("C1");
	}
	else if (B2 = true) {
		if (B3 = true) {
			printf("C2");
		}
		else {
			printf("C3, C4");
		}
	}
	printf("C5");
	system("pause");
	system("cls");
}
void Ex2Carvilhe() {
	bool A, B, C;
	float X, Y;

	A = false;
	B = true;
	C = false;
	X = 1, 5;
	Y = 3, 2;
	X = X + 1;
	if ((C == true) || ((X + Y > 5) || (!A && B)))
	{
		printf("L = 0");
	}
	else {
		printf("L = 1");
	}
	system("pause");
	system("cls");
}
void Ex3Carvilhe() {
	double PI, VOLUME;
	float R = 0;

	PI = 3.1416;
	while (R <= 6) {
		VOLUME = (4.0*PI*pow(R, 3.0)) / 3.0;
		printf("R = %.4f\n", R);
		printf("VOLUME = %.4f\n", VOLUME);
		R = R + 2;
	}
}
void Ex4Carvilhe() {
	int NUMERO;
	NUMERO = 1352;
	printf("D4 = %d\n", (NUMERO % 10));
	printf("D3 = %d , resto %d\n", (NUMERO / 10), (NUMERO % 10));
	printf("D2 = %d , resto %d\n", (NUMERO / 100), (NUMERO % 100));
	printf("D1 = %d , resto %d\n", (NUMERO / 1000), (NUMERO % 1000));
}
void Ex5Carvilhe() {
	bool X;
	int Y;
	while (Y != 6) {
		X = !X;
		printf("X = %s\n", X ? "true" : "false");
		Y = Y + 1;
		if (X == true) {
			printf("%d\n", Y);
		}
		else {
			printf("%d\n", -Y);
		}
	}
}
void Ex6Carvilhe() {
	int N;
	float X; 
	
	printf("Insira um número: ");
	scanf("%d", &N);
	X = N % 2;
	if (X == 0) {
		printf("PAR");
	}
	else {
		printf("ÍMPAR");
	}
}
void Ex7Carvilhe() {
	string qualquer;
	int num;

	printf("Insira um número: ");
	scanf("%d", &num);

	if (num > 0) {
		qualquer = "Número Positivo";
		//strcpy(qualquer, "Número Positivo");
	}
	else if (num < 0) {
		qualquer = "Número Negativo";
		//strcpy(qualquer, "Número Negativo");
	}
	else {
		qualquer = "Zero";
		//strcpy(qualquer, "Zero");
	}
	printf("%c", qualquer);
}
void Ex8Carvilhe() {
	int v[5];
	int i, x;

	v[0] = 1;
	v[1] = 3;
	v[2] = 0;
	v[3] = 2;
	v[4] = 4;
	x = v[0] + v[4];
	printf("X1 é %d\n", x);
	x = v[1] - v[4];
	printf("X2 é %d\n", x);
	x = v[3] * v[0] - x;
	printf("X3 é %d\n", x);
	i = 2;
	x = v[1];
	printf("X4 é %d\n", x);
	//x = v[1]/v[(int)v[0]];
	x = v[1] / v[v[0]];
	printf("X5 é %d\n", x);
}