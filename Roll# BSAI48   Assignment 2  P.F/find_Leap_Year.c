#include<stdio.h>
#include<conio.h>

    void main(){
    	  int choice ;
    	  printf("Enter the year :");
    	  scanf("%d",&choice);
    	
    	if(choice % 4 == 0){
    		printf("This is leap year!!");
		}
    	else {
    		printf("This is not leap year !!");
		}
    	
	}