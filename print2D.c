#include <stdio.h>
#include <conio.h>

int main() {
    
   int a[2][3], i, j, sum = 0;
   
   printf("THIS IS A PROGRAM TO PRINT A 2D ARRAY AND CALCULATE THE SUM OF THE MATRIX");
   printf("\n");
   printf("\nInsert the first row elements of the 2D array\n");
   
   for(i=0; i<2; i++)
   {
       for(j=0; j<3; j++)
       {
           scanf("%d", &a[i][j]);
       }
       
       if(i<1)
       printf("\nInsert the second row elements of the 2D array\n");
       
   }
   
   printf("\nYour matrix is\n");
   for(i=0; i<2; i++)
   {
       for(j=0; j<3; j++)
       {
           printf("%d\t", a[i][j]);
           sum = sum + a[i][j];
       }
       printf("\n");
   }
   
   printf("The sum of the matrix is = %d", sum);

getch();
return (0);
}