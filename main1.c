#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int sum =0; //누적으로 더하니까 초기화 필요
	int x;
	int i; 
	
	printf("정수를 입력하시오:");
	scanf("%d", &x);
	
	for(i=0;i<=x;i++)
	   sum=sum+i;
	
	
	
	printf("누적 결과는 %i입니다.\n", sum);
		
		 
	return 0;
}
