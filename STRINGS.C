#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
	/*Definimos en C, con su pésimo tratamiento de las mismas, un string como
	un arreglo de caracteres. Los declararemos de esta manera:
	char <identificador> [<longitud maxima>];
	La terminación de un string siempre corresponderia con nulo, es decir \0
	Las siguientes strings son equivalentes:*/
	char str1[5]="Hola";
	char str2[]={'H','o','l','a','\0'};
	printf("%s",str1);
	printf("\n%s",str2);
	
	/*Para analizar recorrer los elementos de un string, vamos a cargarla por
	teclado y recorreremos sus elementos mostrandolos uno a uno por pantalla*/
	char palabra[50];
	int i=0;
	printf("\nIngrese una palabra: ");
	scanf("%s",&palabra);
	
	while (palabra[i]!='\0'){
		printf("\n");
		printf("%c",palabra[i]);
		i++;
	}
	/*A continuación, desarrollaré una serie de funciones que pueden utilizarse
	con la librería string.h*/
	//Declararemos algunas strings de prueba para demostrar
	char test1[5]="Hola";
	char test2[6]="Mundo";
	char test3[14]="Hola mundo XD";
	char test4[50]="Tripulante";
	char test5[50]="Impostor";

	strcpy(test4,test5);
	printf("\n%s",test4);

	strcat(test1,test2);
	printf("\n%s",test1);
	/*strlen() devuelve el número de caracteres que tiene un string. Se le debe
	asignar una variable. No cuenta el \0*/
	int longi;
	longi=strlen(test3);
	printf("\n%d",longi);

    /*
	isalnum(caracter): devuelve cierto (un entero cualquiera distinto de cero) si caracter es
	una letra o dígito, y falso (el valor entero 0) en caso contrario.
	isalpha(caracter): devuelve cierto si caracter es una letra, y falso en caso contrario.
	isblank(caracter): devuelve cierto si caracter es un espacio en blanco o un tabulador.
	isdigit(caracter) devuelve cierto si caracter es un digito, y falso en caso contrario.
	isspace(caracter): devuelve cierto si caracter es un espacio en blanco, un salto de línea, un
	retorno de carro, un tabulador, etc., y falso en caso contrario.
	islower(caracter): devuelve cierto si caracter es una letra minúscula, y falso en caso
	contrario.
	isupper(caracter): devuelve cierto si caracter es una letra mayúscula, y falso en caso
	contrario.
	toupper(caracter): devuelve la mayúscula asociada a caracter, si la tiene; si no, devuelve el
	mismo caracter.
	tolower(caracter): devuelve la minúscula asociada a caracter, si la tiene; si no, devuelve el mismo
	caracter.
	isalnum(caracter): devuelve cierto (un entero cualquiera distinto de cero) si caracter es una letra
	o dígito, y falso (el valor entero 0) en caso contrario.
	isalpha(caracter): devuelve cierto si caracter es una letra, y falso en caso contrario.
	isblank(caracter): devuelve cierto si caracter es un espacio en blanco o un tabulador.
	isdigit(caracter) devuelve cierto si caracter es un digito, y falso en caso contrario.
	isspace(caracter): devuelve cierto si caracter es un espacio en blanco, un salto de línea, un
	retorno de carro, un tabulador, etc., y falso en caso contrario.
	islower(caracter): devuelve cierto si caracter es una letra minúscula, y falso en caso contrario.
	isupper(caracter): devuelve cierto si caracter es una letra mayúscula, y falso en caso contrario.
	toupper(caracter): devuelve la mayúscula asociada a caracter,si la tiene; si no, devuelve el
	mismo caracter.
	tolower(caracter): devuelve la minúscula asociada a caracter, si la tiene; si no, devuelve el mismo
	caracter.
	*/
	
	return 0;
	
}

