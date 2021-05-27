//Write a program in C to copy the elements of one array into another array.
//Input Format: Input consist of Two lines. First Line contains the number of elements N and the next contains array elements (space separated). 
//Output Format: Output consist of a single line, display the array elements( first and second(copied array) array) in the given order with space separated with appropriate statement
//Example
//Input:
//3 
//15 10 12
//Output: 
//The elements stored in the first array are :
//15 10 12
//The elements copied into the second array are :
//15 10 12
#include<stdio.h> 

int main()
{
   //Declare all the variables[N, array a & array b, i] used in the code
   int n,i,arr1[10],arr2[10];
   //Read the Value of N using scanf statement
   printf("Enter the size of the array");
   scanf("%d",&n);
  
   //Read the array elements using for loop and scanf statmentfor (i=0;i<n;i++)
   printf("Enter the elements of the array\n");
   for(i=0;i<n;i++){
     scanf("%d",&arr1[i]);
   }
   //Copy the elements of array 'a'[first array] to  array 'b'[second array] using for loop
   for(i=0;i<n;i++){
     arr2[i]=arr1[i];
   }
   //Print the both array elements in using printf statement in the above specified format
    printf("Elements of the first array\n");
   
   for(i=0;i<n;i++){
     printf("%d ",arr1[i]);
   }
    printf("\n");
    printf("Elements of the second array\n");
   for(i=0;i<n;i++){
     printf("%d ",arr2[i]);
   }
   return 0;

}
