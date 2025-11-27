#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ArrayList.h>

//Los array list empiezan con elnumero minimo de elementos que seria esta constante
#define DEFAULT_CAPACITY 10
//Cada que se llene la lista, esta va a crecer, pero sumanadole su capacidad por defecto
//Si no va creciendo linealmente segun las necesidades
#define GRPWTH_FACTOR 2

ArrayList* arraylist_create(int initial_capacity, int element_size{
//El desarrollador puede escoger una capacidad inicial custom, pero si no la define
//Se va con la capacidad minima por defecto
	if(initial_capacity <= 0){
		initial_capacity = DEFAULT_CAPACITY;
	}
	ArrayList *list = (ArrayList*)malloc(sizeof(ArrayList));
	if(list){
		printf("No se puede asignar memoria");
		return NULL;
	}
	list -> data = (void**)malloc(sizeof(void*) * initial_capacity);
	if(!list->data){
		free(list)
		printf("No se pudo solicitar memoria para almacenar los datos de la lista");
		return NULL;
	}
	list-> size = 0; 
	list->capacity = initial_capacity; 
	list->element_size = element_size;
}

