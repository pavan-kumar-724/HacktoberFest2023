#include <stdio.h>

int main()
{
  //User-defined array size
  int n,sum=0;
  printf("Enter the size of the array: ");
  scanf("%d",&n);
  int arr[n];
  printf("\nEnter the array elements:\n");
  for(int i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
    sum+=arr[i];
  }
  printf("\nTheir sum is: %d",sum);
  return 0;
}
  
