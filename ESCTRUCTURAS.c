#include <stdio.h>
//Recordar incluir la libreria de strings para hacer strcpy
#include <string.h>
//Definimos la estructura
struct Libros{
	char titulo[50];
	char autor[50];
	char descripcion[100];
	int libro_id;
};
//Declaracion de funcion
void imprimirLibro(struct Libros libro);
int main(int argc, char *argv[]) {
	/*Estructuras de registro (structs) agrupan variables que pueden tener tipos
	diferentes de datos. Cada componente de un registro se conoce como campo o 
	miembro.
	Se definen de la siguiente manera:
	struct <tag> {
	tipodato miembro1;
	tipodato miembro2;
	...
	}<una o mas variables de estructura>
	
	En el bloque main debemos decalrar los distintos "objetos"
	struct <tag> <tipo1>
	struct <tag> <tipo2>
	...
	
	Y mas adelante podemos asignarle sus respectivos con un punto como subindice
	y también imprimir la respetiva información o usarla para algo.
	tipo1.miembro1
	tipo1.miembro2
	tipo2.miembro1
	tipo2.miembro2
	...
	Ejemplo:
	*/
	//Tipos de libros
	struct Libros Libro1;
	struct Libros Libro2;
	struct Libros Libro3;
	
	//Ingreso de datos de un libro
	printf("\nIngrese el titulo:");
	gets(Libro1.titulo);
	printf("\nIngrese el autor:");
	gets(Libro1.autor);
	printf("\nIngrese la descripcion:");
	gets(Libro1.descripcion);
	printf("\nIngrese el id:");
	scanf("%d",&Libro1.libro_id);
	
	//Imprimimos
	imprimirLibro(Libro1);
}
//Funcion imprimir libro
void imprimirLibro( struct Libros libro ) {
	
	printf( "Titulo libro : %s\n", libro.titulo);
	printf( "Autor libro : %s\n", libro.autor);
	printf( "Libro descripcion : %s\n", libro.descripcion);
	printf( "Libro ID : %d\n", libro.libro_id);
}
