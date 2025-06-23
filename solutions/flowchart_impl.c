#include <stdio.h>

#include "flowchart_impl.h"

void nummer(int x) {
	int result = 1; 

	for (int i = 1; i<=x; i++) {
		if (i % 2 == 0) {
			result +=i;
		} 
		else {
		      result *=i;
		}
  	if (result > 1000) {
			result -= 100;
	}
	}
	printf("Ergebnis: %d \n", result);
}


