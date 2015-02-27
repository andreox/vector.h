#include "vector.h"

void initialize( Vettore *v , int size ) {
	
	
	v->vet = (int*) malloc(sizeof(int)*size) ;
	v->size = 0 ;
	v->max_size = size ;
	
}

void push( Vettore *v , int elem ) {
	
	int i ;
	v->size++ ;
	for ( i = v->size ; i > 0 ; i-- ) v->vet[i] = v->vet[i-1] ;
	v->vet[0] = elem ;
	
}

void print( Vettore v ) {
	
	int i ;
	for ( i = 0 ; i < v.size ; i++ ) printf("%d ", v.vet[i]) ;
	puts("") ;
	
}
bool pop( Vettore *v , int elem ) {
	
	int i , index , j , tmp ;
	for ( i = 0 ; i < v->size ; i++ ) {
		
		if ( v->vet[i] == elem ) {
			
			index = i ;
			for ( j = index ; j < v->size ; j++ ) {
				
				tmp = v->vet[j] ;
				v->vet[j] = v->vet[j+1] ;
				v->vet[j+1] = v->vet[j] ;
				
			}
			
			v->size-- ;
			return true ;
			
		}
		
	}
	return false ;
}

bool sort( Vettore *v , char order ) {

	if ( order != 'd' && order != 'c' ) {

		fprintf( stderr , "Enter an order : 'd' if decreasing sort , 'c' if increasing sort\n" ) ;
		return false ;

	}

	int i , j , tmp ;

	for ( i = 0 ; i < v->size-1 ; i++ ) {

		for ( j = i+1 ; j < v->size ; j++ ) {

			if ( order == 'd' ) {

				if ( v->vet[i] < v->vet[j] ) {

					tmp = v->vet[i] ;
					v->vet[i] = v->vet[j] ;
					v->vet[j] = tmp ;
				}
			}

			else {

				if ( v->vet[i] > v->vet[j] ) {

					tmp = v->vet[i] ;
					v->vet[i] = v->vet[j] ;
					v->vet[j] = tmp ;

				}

			}
		}
	}

	return true ;
}

int find( Vettore v , int elem ) {

	int i ;
	for ( i = 0 ; i < v.size ; i++ ) if ( v.vet[i] == elem ) return i ;

	return -1 ;

}

void swap( Vettore *v , int index1 , int index2 ) {

	int tmp ;
	tmp = v->vet[index1] ;
	v->vet[index1] = v->vet[index2] ;
	v->vet[index2] = tmp ;
	
}

void insert( Vettore *v , int elem , int index ) {

	int i ;
	v->size++ ;
	for ( i = v->size ; i > index ; i-- ) v->vet[i] = v->vet[i-1] ;
	v->vet[index] = elem ;

}

int average( Vettore v ) {
	
	int i , sum=0 ;
	
	for ( i = 0 ; i < v.size ; i++ ) sum += v.vet[i] ;
	
	return (sum/v.size) ;
}

int max( Vettore v ) {
	
	int max = 0 ;
	for ( i = 0 ; i < v.size ; i++ ) if ( v.vet[i] > max ) max = v.vet[i] ;
	
	return max ;
}
