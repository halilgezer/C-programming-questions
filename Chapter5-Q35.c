/* 
Author is : Ibrahim Halil GEZER
5.35 (Fibonacci) The Fibonacci series
0, 1, 1, 2, 3, 5, 8, 13, 21, …
begins with the terms 0 and 1 and has the property that each succeeding term is the sum of the two
preceding terms. a) Write a nonrecursive function fibonacci(n) that calculates the nth Fibonacci
number. b) Determine the largest Fibonacci number that can be printed on your system. Modify
the program of part a) to use double instead of int to calculate and return Fibonacci numbers. Let
the program loop until it fails because of an excessively high value.
*/

#include <stdio.h>

int fibonacci ( int a  ) ;

int main ( void ) {
	int number ;
	printf ( "Enter a number you want to calculate in fibonacci series : " );
	scanf ( "%d" , &number ) ;
	
	fibonacci (number ) ;
	return 0 ;
}

int fibonacci ( int a  ) {
	int b , c , i ; 
	b = 0 ;
	c = 1 ;
	int result  = 0 ;
	
	for ( i = 1 ; i <= a; i++) {
		result = b + c ;
		b =  c ; 
		c = result ;
	}
		printf  (  "Fibonni result of %d th is : %d" , a , b ) ;
	
	return  0 ;  	
	}
