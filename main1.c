#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char c;
	int num =0;
	
	printf("문자열을 입력하세요:");
	
	
	while((c=getchar())!='\n')// 입력문자가 개행문자가 나올때까지 반 
	{
	  if(c>='0' && c<='9')//입력된 글자(c)가 숫자인가?
	  	 num = num+1;//참이면 숫자를 센다.	
	}
	
	printf("숫자의 개수는 %i입니다.\n",num);
	
		 
	return 0;
}
