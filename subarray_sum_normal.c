#include <stdio.h>
void subarray_sum(int arr[],int n,int sum)
{
    int current_sum,i,j;
    for(i=0;i<n;i++)
    {
        current_sum=arr[i];
        for(j=i+1;j<=n;j++)
        {
            if(current_sum==sum)
            {
                printf("Sum found between:%d and %d",i,j-1);
                return 0;
            }
            if(current_sum>sum||j==n)
            {
                break;
            }
            
            current_sum+=arr[j];
        }
    }
}

int main()
{
    int arr[]={1,4,20,2,9,12};
    int n=sizeof(arr)/sizeof(int);
    int sum=23;
    subarray_sum(arr,n,sum);
    
}
