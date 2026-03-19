#include<stdio.h>
#include<stdlib.h>
int main()
{
    int size;
    printf("\nenter the size of the array within you want to fid the sum of the two numbers");
    scanf("%d",&size);
    int a[size+1],t,sum,count=1;
    for(int i=0;i<=size;i++)
    {
        a[i]=i;
    }
    printf("\nEnter the target to be obtained");
    scanf("%d",&t);
    do
    {
        for(int k=0;k<=size;k++)
        {
            for(int j=0;j<=size;j++)
            {
                sum=a[k]+a[j];
                if(sum==t)
                {
                    printf("we got the numbers at the index %d and %d",j,k);
                    exit(0);
                }
            }
            count++;
        }
    }while(count<=size);
    if(sum!=t)
    {
        printf("\nthe given array size is not enough increase the size of the array!");
    }
    return 0;
}