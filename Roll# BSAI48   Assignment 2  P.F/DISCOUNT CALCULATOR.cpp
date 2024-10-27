#include<stdio.h>
int main(){
	
	int total_amount;
	printf("Enter your Total Amount :");
	scanf("%d",&total_amount);
	
	 int final_amount;

if(total_amount>5000){
	
	final_amount =0.2*total_amount;
	printf("Your final_amount is :%d",final_amount);
}
 else if(total_amount<=5000 && total_amount>=3000){
 	
 	final_amount = 0.1*total_amount;
 	printf("Your final_amount is :%d",final_amount);
 }
 else{
 	printf("No DISCOUNT!");
 }
	
	
}