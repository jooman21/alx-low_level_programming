#include <stdio.h>

#include <stdlib.h>                                                                                                                                  

#include <time.h>                                                                                                                                    

                                                
/*
 * main -Lanzador
 * Return: Always 0
 */

int main(void)                                                                                                                                       

	   
{                                                                                                                                                             int n;                                                                                                                                               srand(time(0));                                                                                                             
         n = rand() - RAND_MAX / 2;                                                                                                                  

         /* your code goes there */                                                                                                                   

	 if (n > 0)                                                                                                                                   
                                                      
	 printf("%d is postive", n);                                                                                                                  

         else if (n < 0)                                                                                                                              

	 printf("%d is negative", n);                                                                                                                 

         else                                                                                                                                  
}
