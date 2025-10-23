/*
Name:Steohen Ndungu
Reg:CT101/G/26448/25
A c function to compute for total fare
*/

#include<stdio.h>  
float calculateFare(float distance );
int main(){
	
float fare,distance;

    printf("enter distance travelled\t");
    scanf("%f",&distance);

     fare=calculateFare(distance);

  printf(" your total fare is %.2f",fare);
return 0;
}


float calculateFare(float distance){
	float fare;
	
	
	fare=distance*50;
	return fare;
}