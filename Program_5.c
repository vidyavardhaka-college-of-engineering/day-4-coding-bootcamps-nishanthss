//You will be given an integer array 'arr'. Your task is to print the largest and smallest element in 'arr'.


#include<stdio.h>

int main()
{
    int arr[10], n, i;
    printf("Enter the size of the array\n");
    scanf("%d", &n);

    printf("enter the elements of the array\n");
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    //Write your code here
    for(i = 0; i < n; i++){
      if(arr[0]>arr[i]){
        arr[0]=arr[i];
     }
    }
    printf("the smallest number is %d\n",arr[0]);
     
     for(i = 0; i < n; i++){
      if(arr[0]<arr[i]){
        arr[0]=arr[i];
     }
     }
     printf("the largest number is %d\n",arr[0]);
    return 0;
}
