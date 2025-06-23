#include <stdio.h>

const char* sign_of(int x) { 
	if (x>0) 
		return "positive"; 
	else if (x == 0) 
		return "zero"; 
	else 
		return "negative"; 
}
int main () {
int test[] = { -5 , 0 , 7};
       for (int i = 0; i < 3; i++) {
       int val = test[i];
	printf("%s" "\n" , sign_of(val));
	}
	return 0;
}
