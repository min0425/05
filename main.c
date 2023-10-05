#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,a;
	int sum=0;

	
	printf("Input a number : ");
	scanf("%i",&a);
	
	for(i=0; i<=a; i++)
	sum+=i;
	printf("THe result is %i",sum);
	
	return 0;
}
