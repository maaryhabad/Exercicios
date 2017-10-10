#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <iostream>
#include "ListaObi.h"

void menuOBI() {
	system("cls");
	printf("Bem vindo ao menu OBI!\nEscolha seu exercício\n");
	printf("1. Bondinho\n2. Drone de Entrega\n3. Cartas\n4. Montanha\n5. Zip\n6. Onibus\n7. Gomoku");
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
			bondinho();
			system("pause");
			break;

		case '2':
			system("cls");
			printf("Exercício 2.");
			dronedeEntrega();
			system("pause");
			break;

		case '3':
			system("cls");
			printf("Exercício 3.");
			cartas();
			system("pause");
			break;

		case '4':
			system("cls");
			printf("Exercício 4.");
			montanha();
			system("pause");
			break;

		case '5':
			system("cls");
			printf("Exercício 5. ");
			zip();
			system("pause");
			break;

		case '6':
			system("cls");
			printf("Exercício 6. ");
			onibus();
			system("pause");
			break;

		case '7':
			system("cls");
			printf("Exercício 7. ");
			gomoku();
			system("pause");
			break;
		}
	}
}
void bondinho() {
	int a, m;

	printf("Número de alunos: ");
	scanf_s("%d", &a);
	printf("Número de monitores: ");
	scanf_s("%d", &m);

	if (a + m <= 50) {
		printf("S\n");
	}
	else {
		printf("N\n");
	}
}
void dronedeEntrega() {
	int A, B, C, H, L;

	printf("Valor da dimensão 1: ");
	scanf("%d", &A);
	printf("Valor da dimensão 2: ");
	scanf("%d", &B);
	printf("Valor da dimensão 3: ");
	scanf("%d", &C);
	printf("Valor da altura: ");
	scanf("%d", &H);
	printf("Valor da largura: ");
	scanf("%d", &L);

	if (1 <= A, B, C <= 80 && (1 <= H, L <= 100)) {
		printf("S");
	}
	else {
		printf("N");
	}
}
void cartas() {
	int A, B, C;


	printf("Valor da primeira carta: ");
	scanf_s("%d", &A);
	printf("Valor da segunda carta: ");
	scanf_s("%d", &B);
	printf("Valor da terceira carta: ");
	scanf_s("%d", &C);

	if (A == B) {
		printf("%d\n", C);
	}
	else if (A == C) {
		printf("%d\n", B);
	}
	else if (B == C) {
		printf("%d\n", A);
	}
	else {
		printf("Valores inválidos.");
	}
	system("pause");
}
void montanha() {
	int n, p;
	int A[2000] = {};
	int max = 0;
	p = 0;

	printf("Quantos números tem na sequência? ");
	scanf("%d", &p);
	if (p < 3 || p > 1000) {
		printf("Não coincide com as restrições, tente novamente.\n");
		printf("Quantos números tem na sequência? ");
		scanf("%d", &p);
	}

	for (int i = 0; i < p; i++)
	{

		A[i] = 0;
		while (A[i] > 1 || A[i] < 1000)
		{
			printf("Digite o %d número", i);
			scanf("%d", &A[i]);
			if (A[i] > max)
			{
				max = A[i];
			}

		}
		/*
		if (A[i] = A[i + 1])
		{
			printf("Números consecutivos não podem ser iguais");
		}
		*/
	}
	for (int i = 1; i < p - 1; i++) {
		if (A[i - 1] > A[i] && A[i] < A[i + 1]) {
			printf("S");
			break;
		}
		if (i == p - 2) {
			printf("N");
		}
	}
}
void zip() {
	int jog1carta1, jog1carta2, jog2carta1, jog2carta2, pont1, pont2;

	do {
		printf("Digite o valor de uma carta do jogador 1\n");
		scanf_s("%d", &jog1carta1);		
	} while (jog1carta1 < 1 || jog1carta1 > 13);

	do {
		printf("Digite o valor da outra carta do jogador 1\n");
		scanf_s("%d", &jog1carta2);
	} while (jog1carta1 < 1 || jog1carta1 > 13);
	
	do {
	printf("Digite o valor de uma carta do jogador 2\n");
	scanf("%d", &jog2carta1);
	} while (jog1carta1 < 1 || jog1carta1 > 13);
	
	do {
	printf("Digite o valor de outra carta do jogador 2\n");
	scanf("%d", &jog2carta2);
	} while (jog1carta1 < 1 || jog1carta1 > 13);

	if (jog1carta1 == jog1carta2) {
		pont1 = (jog1carta1 + jog1carta2) * 2;
	}
	else if (jog1carta1 == jog1carta2 + 1 || jog1carta1 == jog1carta2 - 1) {
		pont1 = (jog1carta1 + jog1carta2) * 3;
	}
	else {
		pont1 = (jog1carta1 + jog1carta2);
	}

	if (jog2carta1 == jog2carta2) {
		pont2 = (jog2carta1 + jog2carta2) * 2;
	}
	else if (jog2carta1 == jog2carta2 + 1 || jog2carta1 == jog1carta2 - 1) {
		pont2 = (jog2carta1 + jog2carta2) * 3;
	}
	else {
		pont2 = (jog2carta1 + jog2carta2);
	}

	if (pont1 > pont2)
	{
		printf("O jogador 1 venceu!\n");
	}
	else if (pont1 < pont2) {
		printf("O jogador 2 venceu!\n");
	}
	else {
		printf("Empate\n");
	}
}

bool** alocarMatriz(int cities) {
	bool **m = (bool**)malloc(cities * sizeof(bool*));
	for (int i = 0; i < cities; i++) {
		m[i] = (bool*)malloc(cities * sizeof(bool*));
		for (int j = 0; j < cities; j++) {
			m[i][j] = false;
		}
	}
	return m;
}
bool busca(int cidade, int* conexao, bool** matriz, int destino, int cities){
	*conexao = *conexao + 1;
	if (matriz[cidade][destino] == true) {
		return true;
	}
	else {
		for (int i = 0; i < cities; i++) {
			if (matriz[cidade][i] == true) {
				if (busca(i, conexao, matriz, destino, cities)) {
					return true;
				}
				else {
					*conexao = *conexao - 1;
				}
			}
		}
	}
	return false;
}

void onibus() {
	int cities, origem, destino, p, q;

	int conexao = 0;

	do {
		printf("Digite o número de cidades\n");
		scanf_s("%d", &cities);
	} while (cities < 2 || cities > 10000);

	do {
		printf("Digite o número da cidade de origem\n");
		scanf_s("%d", &origem);
	} while (origem < 1 || origem > cities);

	origem--;

	do {
		printf("Digite o número da cidade de destino\n");
		scanf_s("%d", &destino);
	} while (destino < 1 || destino > cities);

	destino--;

	bool **matriz = alocarMatriz(cities);

	for (int x = 0; x < cities - 1; x++) {
		do {
			printf("Faça a conexão %d (1)", x);
			scanf_s("%d", &p);
		} while (p < 1 || p > cities);
		
		do {
			printf("Faça a conexão %d (2)", x);
			scanf_s("%d", &q);
		} while (q < 1 || q > cities);
		


		matriz[p-1][q-1] = true;
		matriz[q-1][p-1] = true;
	}

	busca(origem, &conexao, matriz, destino, cities);

	printf("Você precisou pegar %d conexões", conexao);
	
	free(matriz);
	
}


void gomoku(){

	int tabuleiro[15][15];

	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 15; j++) {
			do {
				printf("Número da linha: %d \nNúmero da coluna: %d", i, j);
				scanf_s("%d", &tabuleiro[i][j]);
			} while (tabuleiro[i][j] < 0 || tabuleiro[i][j] > 2);
		}
	}

	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 15; j++) {
			
		}
	}
}
	

	





