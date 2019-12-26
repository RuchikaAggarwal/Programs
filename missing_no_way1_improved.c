#include <stdio.h>
int missing_no(int arr[],int n)
{
    int i,total=0;
    //int missno;
    for(i=1;i<=n;i++)
    {
        total+=i;
        total-=arr[i-1];
    }
    return total;
}

int main()
{
    int arr[]={1,0,2,3,4};
    int n=sizeof(arr)/sizeof(int);
    int ans=missing_no(arr,n);
    printf("Missing number is:%d",ans);
}
