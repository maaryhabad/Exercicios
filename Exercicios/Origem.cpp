#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>
#include "Lista1Vini.h"
#include "Lista1Carvilhe.h"
#include "Vetores.h"
#include "ListaOBI.h"
#include "Soft.h"


void main() {
	setlocale(LC_ALL, "Portuguese");
	char command = 0;
	printf("Comandos possíveis:\n\n 1 - Exercícios Carvilhe\n 2 - Exercícios Vinícius\n 3 - Vetores\n 4 - OBI\n 5 - SoftBlue\n q - Sair\n");
	while ((command != '1') && (command != '2') && (command != '3') && (command != '4') && (command != '5') && (command != 'q'))
	{
		command = getchar();
		switch (command)
		{
		case '1':
			MenuCarvilhe();
			break;

		case '2':
			MenuVini();
			break;

		case '3':
			menuVetores();
			break;

		case '4':
			menuOBI();
			break;

		case '5':
			menuSoft();
			break;
		}
	}
}
	
			
	
	