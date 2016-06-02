#include <cstdlib>
#include <iostream>
#include <stdio.h>

int main ()
{
	int i;
	double mas[100], b, n, a;
	
	printf("\nA: ");
	  scanf("%lf", &a);
	
	printf("\nB: ");
	  scanf("%lf", &b);
	
	for(i = 0, n = a; n < b; i++) {
		n = n + 0.1;
 	       mas[i] = n;
		      printf("%.1lf\n", n);
	}	
    system("PAUSE");
    return EXIT_SUCCESS;
}
