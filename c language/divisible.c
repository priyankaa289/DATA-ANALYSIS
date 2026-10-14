//6. W.a.p to check whether a number is divisible by 5 and 11
#include<stdio.h>

int  main(){
	int num;
	
	printf("enter a num:- ");
	scanf("%d",&num);
	
	if(num%5==0 && num%11==0){
		printf("number is divisible by 5 and 11");
	}
	
	else{
		printf("number is not divisible by 5 and 11");
	}
	
	
	
	return 0;
}
