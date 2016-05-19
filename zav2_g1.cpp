#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	double mas[100];
	double n,krok; 
	int i;
	printf("Vvedite n:");
	scanf("%lf", &n);
	
	for (i=0,krok=1;krok<n;i++,krok+=0.1)
         {
		mas[i]=krok;
		printf("\n mas[%d]= %.2lf\n", i,krok);
	     }

	  system("pause");
	  return 0;
   }
    
    
