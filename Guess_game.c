
/*
Name:
Reg no:CT101/G/26448/25
Description:a simple c program showing a simple guess game
*/

#include<stdio.h> 
#include<stdlib.h>//because of use of randand srand
#include<time.h>
int main(){
	
	int secret_num,attempts=0,guess;
	srand(time(0));
secret_num=rand()%20+1;

	printf("guess number between 1and 20\n");
		
			
		while (1)	{

      printf("enter your guess\n");
			scanf("%d",&guess);
			
			attempts++;
		
			
		if(guess>secret_num){
			
			printf("too high\n");
			
		}
			
			else if(guess<secret_num){
			printf("too low\n");
		}
			
		else{	
			printf("congrats\n");
	
	printf("it took you %d attempts\n",attempts);
}
}	
	
	return 0;
}