#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	double mas[200];
	double krok; 
	int i;

	
	for (i=0,krok=-10;krok<10;i++,krok+=0.1)
         {
		mas[i]=krok;
		printf("mas [%d] = %.2lf\n", i,krok);
	     }

	  system("pause");
	  return 0;
   }
    

