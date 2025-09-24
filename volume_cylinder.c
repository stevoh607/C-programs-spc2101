/*
Name:stephen ndungu
Reg no; CT101/G/26448/25
Description:C program tofind volume of cylinder
*/
#include<stdio.h>
	
	int main(){
	float pi,radius,height,surface_area;
	
    printf("enter pi: ");
	scanf("%f",&pi);
	
	printf("\nenter radius: ");
	scanf("%f",&radius);
	
	
	printf("\nenter height: ");
	scanf("%f",&height);
	
	
	//volume 
	surface_area=(2*pi*radius*radius)+(2*radius*height);
	printf("/n volume is %f",surface_area);
	
	return 0;
	
}