//Write a program in C to find the sum of all elements of the array. 
//Input the number of elements to be stored in the array :3
//Input 3 elements in the array :
//2 5 8
//Expected Output:
//Sum of all elements stored in the array is : 15
#include <stdio.h>
int main()
{
  //Declare all the variables[N, array a(1D array), i, sum=0] used in the code
  int i,ar[10],n,sum=0;
  //Read the Value of array size N using scanf statement
  printf("Enter the size of array\n");
  scanf("%d",&n);
  //Read the array elements using for loop and scanf statment
   printf("Enter the elements of array\n");
  for(i=0;i<n;i++){
    scanf("%d",&ar[i]);
  }
  // DO the addition of array elements and store the final result in variable sum
  for(i=0;i<n;i++){
    sum = sum + ar[i];
  }  
  //Print the sum of array elements which is stored in variable sum using printf statement
    printf("The sum of theselements of arrayis : %d\n",sum);
  
  return 0;
}
