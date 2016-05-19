#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

     int main () {
     int i, a, b;
        printf("A= ");
         scanf("%d", &a);
          printf("B= ");
           scanf("%d", &b);
           
         srand(time(NULL));
         for (i = 1; i <= 5; i++) {
          printf("%d\n", rand() % (b - a) + a);
         
     }
    system("PAUSE");
    return 0;
}
