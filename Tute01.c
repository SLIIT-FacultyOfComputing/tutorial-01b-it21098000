/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int i , sum = 0 , mark[2] ;
	float avg ;
	for (i = 0 ; i < 2 ; i++)
	{
		printf("Enter the mark %d :" , i + 1  ) ;
		scanf("%d" , &mark[i]) ;
		
		sum += mark[i] ;
	}
	
	avg = sum / 2.0 ;
	
	printf("average :%.2f" , avg) ;
  
  return 0;
}

