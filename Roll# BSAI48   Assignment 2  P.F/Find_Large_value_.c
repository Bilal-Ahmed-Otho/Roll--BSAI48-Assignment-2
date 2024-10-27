#include<stdio.h>
int main(){
	int num1,num2,num3;
	printf("Enter the Number.1 or Value :");
	scanf("%d",&num1);
	
	printf("Enter the Number.2 or Value :");
	scanf("%d",&num2);
	
	printf("Enter the Number.3 or Value :");
	scanf("%d",&num3);
	if(num1>num2 && num1>num3){
		printf("The number.1 is greater!");
	}
	else if(num2>num1 && num2>num3){
		printf("The number.2 is greater!");
	}
		else if(num3>num1 && num3>num2){
		printf("The number.3 is greater!");
	}
	else{
		printf("INVALID VALUE!!");
	}
	
	
	
	return 0;
}
