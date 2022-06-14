#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Libros{
	char titulo[50];
	char autor[50];
	char descripcion[100];
	int libro_id;
};
void imprimirLibro(struct Libros libro);
int main(int argc, char *argv[]) {
	int cantlib=3;
	struct Libros libro[cantlib];
	for(int i=1;i<=cantlib;i++){
		printf("Ingrese el titulo:");
		scanf("%s",&libro[i].titulo);
		printf("Ingrese el autor:");
		scanf("%s",&libro[i].autor);
		printf("Ingrese la descripcion:");
		scanf("%s",&libro[i].descripcion);
		printf("Ingrese el id:");
		scanf("%d",&libro[i].libro_id);
	}
	imprimirLibro(libro[1]);
	imprimirLibro(libro[2]);
	imprimirLibro(libro[3]);
	return 0;
}
void imprimirLibro( struct Libros libro ) {
	
	printf( "Titulo libro : %s\n", libro.titulo);
	printf( "Autor libro : %s\n", libro.autor);
	printf( "Libro descripcion : %s\n", libro.descripcion);
	printf( "Libro ID : %d\n", libro.libro_id);
}

