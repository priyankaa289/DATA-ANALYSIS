//7. W.a.p to check whether a character is alphabet or not.
#include<stdio.h>
int main(){
	char ch;
	
	printf("enter a character:- ");
	scanf("%c",&ch);
	
	if (ch >='A' && ch <='z' || ch >='a'&& ch <='z')
	{
		printf("Alphabet");
	}
	
	else{
		printf("Not Alphabet");
	}
	
	
	
	
	return 0;
}
