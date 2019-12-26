#include <stdio.h>
int missing_no(int arr[],int n)
{
    int i,expectedsum,calsum=0;
    int missno;
    for(i=0;i<n;i++)
    {
        calsum+=arr[i];
    }
    expectedsum=((n)*(n+1))/2;
    missno=expectedsum-calsum;
    return missno;
}

int main()
{
    int arr[]={1,0,2,5,4};
    int n=sizeof(arr)/sizeof(int);
    int ans=missing_no(arr,n);
    printf("Missing number is:%d",ans);
}
