#include<stdio.h>

//Leap year:Since one year is approximately 365 days and 6 hours, it is repeated every four years and the name given to the years that February took 29 days.
// A computer program receives an unsigned integer, year, and tells user that if the year is a leap year or not. A leap year: 
// Can be divided by 4 with no remainder and cannot divided by 100.Can be divided by 400 with no remainder. 

int main(){
	
	unsigned int n;
	printf("Please enter a year:");
	scanf("%x",&n);
	
	while(n%100!=0){
		
	    if(n%4==0){
	    	
	       printf("Leap year.");
	    	
		}
		else
		  printf("Not a leap year.");
	
	break;
	}
	
	return 0;
}


