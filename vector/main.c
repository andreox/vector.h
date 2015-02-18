#include "vector.h"


int main() {
	
	Vettore vet ;
	
	initialize( &vet , 10 ) ;
	push( &vet , 5 ) ;
	push( &vet , 36 ) ;
	push( &vet , 78 ) ;
	push( &vet , 49 ) ;
	print( vet ) ;
	sort( &vet , 'd' ) ;
	print(vet) ;
	sort( &vet , 'c' ) ;
	print(vet) ;
	pop( &vet , 78 ) ;
	print(vet) ;
	int ind = find( vet , 36 ) ;
	int ind2 = find( vet , 5 ) ;
	swap( &vet , ind , ind2 ) ;
	print(vet) ;

	return 0 ;
	
}
