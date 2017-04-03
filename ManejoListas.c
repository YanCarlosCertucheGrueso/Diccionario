#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//dicclistas.c NOmbre archivo

struct Dict{
	char palIng[50];
	char palEsp[50];
}
typedef struct Dict TipoDict;
struct Nodo{
	TipoDic info;
	struct Nodo siguiente;
}
typedef struct Nodo TipoNodo;

TipoNodo *lista=NULL;

TipoNodo* crearNodo(TipoDict elemento){
	TipoNodo *newNodo=(TipoNodo )malloc(sizeof(TipoNodo));
	strcpy(newNodo->info.palIng, elemento.palIng);
	strcpy(newNodo->info.palEsp, elemento.palEsp);
	nexNodo->siguiente = NULL;
	return newNodo;
}
