#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int mas [100];
	int h, i, k;
	
    printf("Vvedite h:");
	  scanf("%d", &h);
	
	for (i = 0; i < h; i++) {
	  scanf("%dk=", &k);
	
		printf("\t mas [%d] = %d\n", i, k);
   }
	system("PAUSE");
	return 0;
}
  

