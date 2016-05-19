#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int mas[100],n,i,znachenny;
       	printf("Vvedite n:");
	    scanf("%d",&n);
	for(i=0,znachenny=1;znachenny<n;znachenny+=2,i++) {
        mas[i]=znachenny;
	    printf("%d\n", mas[i]);
	  }	

	system("pause");
	return 0;
}
    
    
