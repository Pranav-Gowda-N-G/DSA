#include<stdio.h>
int main()
{
    int size,i,n,count=0;
    printf("Enter the size of the array");
    scanf("%d",&size);
    int arr[size];
    for(int j=0;j<size;j++)
    {
        scanf("%d",&arr[j]);
    }
    printf("\nenter the starting and the ending index of the array");
    scanf("%d%d",&i,&n);

    int ans[n-i+1];

    for(int k=i;k<=n;k++)
    {
        if(count==0)
        {
            ans[count]=arr[k];
            count++;
        }
        else
        {
            ans[count]=ans[count-1]+arr[k];
            count++;
        }
        printf("\t%d",ans[count-1]);
    }
    return 0;
}