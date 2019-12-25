#include <stdio.h>
void subarray_sum(int arr[],int n,int sum)
{
    int current_sum=arr[0],i;
    int start=0;
    for(i=1;i<=n;i++)
    {
        //if current sum exceeds sum then remove starting element
        if((current_sum>sum)&&(start<i-1))
        {
            current_sum=current_sum-arr[start];
            start++;
        }
        //if current sum is equal to sum
        if(current_sum==sum)
        {
            printf("Sum found between:%d and %d",start,i-1);
            return 0;
        }
        current_sum=current_sum+arr[i];
        
    }
}

int main()
{
    int arr[]={1,4,20,2,9,12};
    int n=sizeof(arr)/sizeof(int);
    int sum=23;
    subarray_sum(arr,n,sum);
    
}
