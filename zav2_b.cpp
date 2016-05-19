#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int mas [100];
	int a, b, i, n;
	  printf("a=");
	  scanf("%d", &a);
	  printf("b=");
	  scanf("%d", &b);
	
	  for (i=0,n=a;n<b;i++,n++) {
		mas [i] = n;
		printf("\n%d\n",n);
   	}
     	system("pause");
	    return 0;
}
    
    
