#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

     int main () {
     int i;
     double mas[50];
         srand(time(NULL));
         for (i = 1; i <= 5; i++) {
             mas[i] =  (double) rand() / RAND_MAX * 1;
		printf("%.2lf\n", mas[i]);
          
        }
    system("PAUSE");
    return 0;
}
