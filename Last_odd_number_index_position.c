#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=n;i>=0;i--)
    {
        if(arr[i]%2==1)
        break;
    }
    printf("%d",i);
}