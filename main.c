#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int answer=59;
	int input;
	int trial=0;
	
	do
	{printf("Guess a number :");
	scanf("%i",&input);
	
	if(input<answer)
	{printf("low\n");
	}
	else if(input>answer)
	{printf("high\n");
	 } 

	trial=trial+1;
	}
	while(input!=answer);
	
	printf("Congratulation! trials : %i \n",trial);

	
	
	return 0;
}
