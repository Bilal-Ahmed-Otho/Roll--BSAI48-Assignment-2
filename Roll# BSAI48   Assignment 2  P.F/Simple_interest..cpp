#include<stdio.h>
int main(){
	
	int principal,rate,time;
	float simple_interest;
	
  printf("Enter your Principal :");
  scanf("%d",&principal);

  printf("Enter your Rate:");
  scanf("%d",&rate);

  printf("Enter your Time :");
  scanf("%d",&time);
  
  simple_interest = principal*rate *time/100;
  
  printf("Your final Simple :%f",simple_interest);
  
}