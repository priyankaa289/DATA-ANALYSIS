//5. W.a.p voting eligibility
#include<stdio.h>
int main(){
	int age;
	
	printf("enter a age:- ");
	scanf("%d",&age);
	
	if(age>=18){
		printf("voting eligibility");
	}
	
	else{
		printf("voting Ineligibility");
	}	
	return 0;
}
