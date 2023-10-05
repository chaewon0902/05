#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int x;
	printf("정수 하나를 입력하시오: ");
	scanf("%d",&x);
	
	if(x>=0){
		printf("절대값은 %d입니다.\n",x); //조건식이 맞으면 실행 
	}
	else{
		printf("절대값은 %d입니다.\n",-x); //조건식이 틀리면 실행 
	}
	
	return 0;
}
