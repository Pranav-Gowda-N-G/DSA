#include<stdio.h>
int main()
{
    int n,i,y,add=0;
    printf("Enter the size of the array for saving the input");
    scanf("%d",&n);
    int arr[n],arr1[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(y=0;y<n;y++)
    {
        add+=arr[y];
        arr1[y]=add;
        printf("\t%d",arr1[y]);
    }
   printf("\nThe sum of all the numbers is %d",add);
   return 0;
}