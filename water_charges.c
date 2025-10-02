/*
Name:Steohen Ndungu
Reg:CT101/G/26448/25
Description:A simple c program to compute for total water bills 

*/

#include<stdio.h>

int main(){
	
	
	float units ,charges;
	
	printf("enter number of units");
	scanf("%f",&units);
	
	
	
	
	
	if(units<=30){
		
		charges=units*20;
	}
	else if(units>=31||units<=60){
		charges=units *25;
	}
			
			
		else if(units>=60){
	charges=units*30;
	}
	
	printf("charges is %.2fKES",charges);
	
	return 0;

	
}

