#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 *
 * Description: true or false validation
 *
 * Return : 0 (success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%d", n);
if(!n){
  printf("is zero\n");
}
else if(n > 0){printf(" is positive\n");}
else{printf(" is negative\n");}	
return (0);
}
