#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	double mas [100];
	double krok;
	int i,a,b;
    printf("a=");
	scanf("%d", &a);
	printf("b=");
	scanf("%d", &b);
	
	  for (i=0,krok=a;krok<b;krok+=0.1,i++) {
		mas[i]= krok;
		printf("\n mas[%d] = %lf\n", i, krok);
       	}
     	system("Pause");
	    return 0;
}
    
