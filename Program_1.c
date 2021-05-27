//Write a C program to get the integer array from the user and print it in the given order.
//Input Format: Input consist of Two lines. First Line contains the number of elements N and the next contains array elements (space separated). 
//Output Format: Output consist of a single line, display the array elements in the given order with space separated.
//Example:
//Input:
//5 
//1 5 10 50 123
//Output: 
//1 5 10 50 123
#include<stdio.h> 

int main()
{
   //Declare all the variables[N, array a, i] used in the code
   int n,i,ar[10];
   //Read the Value of N using scanf statement
   printf("Enter the size of the array ");
   scanf("%d",&n);
   //Read the array elements using for loop and scanf statment
   printf("Enter the %d elements of the array\n",n);
   for (i=0;i<n;i++){
     scanf("%d",&ar[i]);
   }
   //Print the array elements in using printf statement
   printf("The elements of the array are\n");
   for (i=0;i<n;i++){
     printf("%d  ",ar[i]);
   }
   return 0; 
}
