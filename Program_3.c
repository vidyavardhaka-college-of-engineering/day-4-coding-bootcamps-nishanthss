//Write a C program to get two rows and columns of integers from the user and print them in matrix fashion.

//Example:
//Input: 
//1 2 3 4
//Output: 
//1   2
//3   4
#include<stdio.h> 
int main()
{
  //Declare all the variables[row, col, array a(2D array), i] used in the code
  int arr[10][10],n,m,j,i;
   //Read the Value of row and coloumn of the matrix (i.e size of matrix) using scanf statement
   printf("Enter the size of row and column of matrix \n");
   scanf("%d%d",&n,&m);
   //Read the elements of matrix a using nested for loop and scanf statment
   printf("Enter the elements of matrix \n");
   for(i=0;i<n;i++){
      for(j=0;j<m;j++){
        scanf("%d",&arr[i][j]);
      }
      printf("\n");

   }
   //Print the elements of matrix a using nested for loop and printf statment as per the above specified format
   for(i=0;i<n;i++){
      for(j=0;j<m;j++){
        printf("%d ",arr[i][j]);
      }
      printf("\n");

   }

  return 0;
}
