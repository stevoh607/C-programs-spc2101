
/*
Name:Stephen ndungu
Reg no:CT101/G/26448/25
Description:a simple c program using while loop to show bank withdrwals

*/

#include<stdio.h >

int main(){
	
	
	 float balance=10000 ,amount;
 
	 
	 printf("your balance is %.2f\n",balance);
	 
	 	while(balance>0){
	 
	printf("enter amount to withdraw\n");
	
	scanf("%f",&amount);
	
		balance-=amount;
	
	
	printf("current balance is %.2f\n",balance);

	
		 }
	
	printf("insufficient balance");
	
	
	return 0;
	
	
}