/*
Name:Stephen Ndungu
Reg:ct101/g/26448/25
Description:a simple c program to check exam eligibility


*/
#include<stdio.h>
int main(){

int attendance,average_marks;


   printf("enter attendance\t");
   scanf("%d",&attendance);

printf("enter average_marks");
scanf("\n%d",&average_marks);



if(attendance>=75&& average_marks>=40){
	printf("eligible for final exam");
}else{

printf("not eligible for final exam");

}
return 0;


}



