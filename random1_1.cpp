#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
     int i, n;
      printf("N= ");
      scanf("%d", &n);
      srand(time(NULL));
       
         for (i = 1; i <= 5; i++) {
         printf("%d\n", rand() % n);
         if (i % 5 == 0) printf("\n");
      
         }
    system("PAUSE");
    return 0;
}
