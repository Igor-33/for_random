#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

     int main () {
     int i;
     srand(time(NULL));
     
         for (i = 1; i <= 10; i++) {
          printf("%d\n", rand() % 200 - 100);
         if (i % 5 == 0) printf("\n");
         
        }
    system("PAUSE");
    return 0;
}
