/*
Name:Stephen Ndungu
Reg no:CT101/G/26448/25
2d array
*/

#include <stdio.h>
int main(){

int i,j;
	
int occupancy[5][10];
    
	int occupied,vacant;
    printf("hotel revenue \n");

    //1==occupied and 0= vacant
    printf("Enter occupancy (1 = occupied, 0 = vacant):\n");
    for (i = 0; i < 5; i++) {
        printf("Floor %d:\n", i + 1);
        for (j = 0; j < 10; j++) {
            printf("  Room %d: ", j + 1);
            scanf("%d", &occupancy[i][j]);
        }
    }

    printf("\nyour data is:\n");
    for (i = 0; i < 5; i++) {
        occupied=0;
        vacant=0;
        for (j = 0; j < 10; j++) {
            if (occupancy[i][j] == 1){
			  occupied++;
			} else{
                vacant++;
			}
        }
        ;printf("Floor %d - Occupied: %d, Vacant: %d\n", i + 1, occupied, vacant);
    }
    
    return 0;
}