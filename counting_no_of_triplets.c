#include <stdio.h>
int no_of_triplets(int arr[],int n)
{
    int i,j;
    int max_no=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]>max_no)
        {
            max_no=arr[i];
        }
    }
    
  
    //static int r=max_no+1;
    int freq[100]={0};
    
    for(i=0;i<n;i++)
    {
        int x=arr[i];
        freq[x]++;
    }
    for(i=0;i<=max_no;i++)
    {
        printf("frequency of %d is%d\n",i,freq[i]);
    }
    int ans=0;
    //case1(0,0,0)
    ans+=(freq[0]*(freq[0]-1)*(freq[0]-2)/(6));
    
    //case2(0,x,x)
    for(i=1;i<=max_no;i++)
    {
        ans+=((freq[0])*(freq[i])*(freq[i]-1)/(2));
    }
    
    //case3 (x,x,2x)
    for(i=1;i<=max_no;i++)
    {
        ans+=((freq[i])*(freq[i]-1)*(freq[2*i])/(2));
    }
    
    //case4(x,y,x+y)
    for(i=1;i<=max_no;i++)
    {
        for(j=i+1;i+j<=max_no;j++)
        {
            ans+=((freq[i])*(freq[j])*(freq[i+j]));
    
            
        }
    }
    return ans;
    
    
}

int main()
{
    int arr[]={1,1,1,2,2};
    int n=sizeof(arr)/sizeof(int);
    int ans=no_of_triplets(arr,n);
    printf("No. of triplets are:%d",ans);
    
}
