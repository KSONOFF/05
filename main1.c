#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int answer = 59;
	int trial = 0;
	
	
	
	do
	{
		printf("guess a number:");
		scanf("%d", &answer);
		trial++;
		
		if(answer<59)
			printf("high!\n");
			
		
		else if(answer>59)
			printf("low!\n");
			
	
		
		
		
		
			
		
	}
	while(answer!=59);
	
	
		printf("number of trial = %i\n", trial);
		
	 
	return 0;
}
