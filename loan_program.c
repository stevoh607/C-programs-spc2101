/*
name:stephen ndungu
reg no:CT101/G/26448/25
a simple program to implement loan requirements


*/
#include<stdio.h>

int main(){
	
	int age ;
	float income;
	
	printf("enter age");
	scanf("%d",&age);
	
	printf("enter income");
	scanf("%f",&income);
	
	//loan qualification
	
	if(age>=21&&income>=21000){
		printf("congratulations you quaify for the loan ");
	}else{
		printf("unfortunately ,we are unableto offer aloan at this time");	
		}
		
		return 0;
}
