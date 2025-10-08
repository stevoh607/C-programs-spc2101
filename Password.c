/*
Name:Stephen ndungu
Reg no:CT101/G/26448/25
Description:a simple c program using the do while loop to find password

*/
#include<stdio.h>
int main(){
	int password;

	
	do {
      printf("enter you password\n");
		scanf("%d",&password);
	if (password ==1234){
		//if else used to cater for multiple choices
		printf("access granted\n");
	
	}
	else {
	
	printf("wrong password\n");
	}
	
	}
	
	while (password!=1234);
	
	
	return 0;
}