/*
Name:Steohen Ndungu
Reg:CT101/G/26448/25
Description:A  c function to calculate total electricity bill
*/
#include<stdio.h>  

float calculateElectricBill(float units);

int main (){
	float units ,total_bill;
	printf("enter units consumed");
	scanf("%f",&units);
	
	
	
	total_bill=calculateElectricBill(units);
	
	
	printf("total_bill is %.3f",total_bill);
	

	

	return 0;
}


float calculateElectricBill(float units){
	float total_bill;
	if (units <=100){
		total_bill=units*10;
	}
	else if (units<=200){
	total_bill=100*10+((units-100)*15);
	}
	else {
		total_bill=100*10+100*15+((units-200)*20);
	}
	
	
	return total_bill;
	
	
	
	
}
