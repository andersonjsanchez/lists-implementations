#include <stdio.h>
#include <stdlib.h>
#include "array_list.h"

int main() {
	//Creo la variable myList con capacidad minima de 3 
	ArrayList* myArrayList = arraylist_create(3, sizeof(int));
	
	//Agrego los 4 elementos con arraylist_add
	int elemento1 = 10;
	int elemento2 = 15;
	int elemento3 = 20;
	int elemento4 = 25;
	
	arraylist_add(myArrayList, &elemento1);
	arraylist_add(myArrayList, &elemento2);
	arraylist_add(myArrayList, &elemento3);
	arraylist_add(myArrayList, &elemento4);
	
	// Agrego 1 elemento con arraylist_insert en posicion 2
	int elementoInsertar = 50;
	arraylist_insert(myArrayList, &elementoInsertar, 2);
	
	//Obtengo un elemento con arraylist_get y lo imprimo
	int* elementoObtenido = (int*)arraylist_get(myArrayList, 2);
	printf("Elemento obtenido en posicion 2: %d\n", *elementoObtenido);
	
	//Remuevo 2 elementos con arraylist_remove
	arraylist_remove(myArrayList, 0); // Remuevo primer elemento
	arraylist_remove(myArrayList, 3); // Remuevo elemento en posicion 3
	
	//Destruyo la lista con arraylist_destroy
	arraylist_destroy(myArrayList);
	
	return 0;
}
