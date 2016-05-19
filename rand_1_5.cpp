#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

     int main () {
     int i;
     double mas[50];
     double n;
        printf("N= ");
        scanf("%lf", &n);
        
         srand(time(NULL));
         for (i = 1; i <= 5; i++) {
             mas[i] =  (double) rand() / RAND_MAX * n;
		printf("%.2lf\n", mas[i]);
          
        }
    system("PAUSE");
    return 0;
}
