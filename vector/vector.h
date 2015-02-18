#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct vector {

	int size ;
	int max_size ;
	int *vet ;
	
} Vettore ;

void initialize( Vettore *v , int size ) ;
void push( Vettore *v , int elem ) ;
bool pop( Vettore *v , int elem ) ; //Return true if found
bool sort( Vettore *v , char order ) ; //Order = 'd' if decreasing, 'c' if increasing
int find( Vettore v , int elem ) ; //Return pos if found , -1 if not found
void swap( Vettore *v , int index1 , int index2 ) ;
void print( Vettore v ) ;