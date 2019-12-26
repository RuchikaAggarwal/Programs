#include <stdio.h>
int missing_no(int arr[],int n)
{
    int i,x1,x2;
    x1=arr[0];
    x2=1;
    //xor all array elements 
    for(i=1;i<n;i++)
    {
        x1=x1^arr[i];
    }
    
    for(i=2;i<=n+1;i++)
    {
        x2=x2^i;
    }
    
    
   
    return (x1^x2);
}

int main()
{
    int arr[]={1,0,2,3,4};
    int n=sizeof(arr)/sizeof(int);
    int ans=missing_no(arr,n);
    printf("Missing number is:%d",ans);
}
