#include<stdio.h>

// ele vai mudar 

int main (void) {
	
	int x=5;
	int*ponteiro;
	ponteiro= &x;
	
	int y = 50;
	*ponteiro = y;
	
	
	 printf("%i %i \n", x, y);
	 getchar();
	  return 0;
	  
	
	
	//termina aqui
	
}
