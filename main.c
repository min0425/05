#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int c;
	int num;
	
	printf("Input a string : ");
	
	while((c=getchar()) != '\n')
	{if(c>=48,c<=57)
	 {num+=1;
	}
	}
	printf("The number of digits is %i",num);

	
	return 0;
}
