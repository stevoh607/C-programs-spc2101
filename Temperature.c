/*
Name:Steohen Ndungu
Reg:CT101/G/26448/25
Description:A  c function to convert degress in fahrenheit to celsius
*/
#include<stdio.h>

float calculatecelsius(float F);


int main(){
	float  F;
	printf("enter temperature in Fahrenheit\t");
	
	scanf("%f",&F);
	
	
	F= calculatecelsius(F);
	printf("temperature  is %.2f",F);
	
	return 0;
	
}


float calculatecelsius(float F){
	
	float C;
	
	C=(F-32)*5/9;
	
	
	return C;
	
}
