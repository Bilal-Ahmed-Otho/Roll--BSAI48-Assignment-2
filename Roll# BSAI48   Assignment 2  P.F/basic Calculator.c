#include<stdio.h>
#include<conio.h>
    void main(){
    	
    	 printf("==========================CALCULATOR=======================\n\n\n");
    	 
    	 int a;
    	 int b;   	 
		 
    	 printf("Enter first value :",a);
    	 scanf("%d",&a);
    	 printf("Enter second value :",b);
    	 scanf("%d",&b);
    	 
    	 char choice ;
    	 printf("Choose the opretion + , - , * , / \n");
    	    scanf(" %c",&choice);
    	
    	if(choice=='+'){
// 		int sum = a+b ;
    		printf("Sum of these values is :%d",a + b);
		}
		else if(choice=='-'){
//			int sub = a-b;
			printf("Subtaraction of these values is :%d",a-b);
		}
		else if (choice=='*'){
//			int mul = a*b;
			printf("Multipliction of these values is :%d",a*b);
		}
		else if (choice=='/'){
//		int div = a/b;
			printf("Division of thes values is :%d",a / b);
			
		}
		else {
			printf("I don't know what you say ?");
		}		
    	return 0;
	}
