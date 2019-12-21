#include <stdio.h>
#include<math.h>
void swap(int* a, int* b)  
{  
    int t = *a;  
    *a = *b;  
    *b = t;  
}  
  
/* This function takes last element as pivot, places  
the pivot element at its correct position in sorted  
array, and places all smaller (smaller than pivot)  
to left of pivot and all greater elements to right  
of pivot */
int partition (int arr[], int low, int high)  
{  
    int pivot = arr[high]; // pivot  
    int i = (low - 1); // Index of smaller element  
  
    for (int j = low; j <= high - 1; j++)  
    {  
        // If current element is smaller than the pivot  
        if (arr[j] < pivot)  
        {  
            i++; // increment index of smaller element  
            swap(&arr[i], &arr[j]);  
        }  
    }  
    swap(&arr[i + 1], &arr[high]);  
    return (i + 1);  
}  
  
/* The main function that implements QuickSort  
arr[] --> Array to be sorted,  
low --> Starting index,  
high --> Ending index */
void quickSort(int arr[], int low, int high)  
{  
    if (low < high)  
    {  
        /* pi is partitioning index, arr[p] is now  
        at right place */
        int pi = partition(arr, low, high);  
  
        // Separately sort elements before  
        // partition and after partition  
        quickSort(arr, low, pi - 1);  
        quickSort(arr, pi + 1, high);  
    }  
} 
pythagoreantriplet(int arr[],int n)
{
    int i,j;
    //squaring all array elements 
    for(i=0;i<n;i++)
    {
        arr[i]=arr[i]*arr[i];
    }
    //sorting all array elements
    quickSort(arr, 0, n - 1); 
    
    //now fix one element and find the other two elements
    for(i=n-1;i>=2;i--)
    {
        int l=0;
        int r=i-1;
        while(l<r)
        {
            if(arr[l]+arr[r]==arr[i])
            {
                printf("Yes..triplet found\n");
                double a,b,c;
                a=sqrt(arr[l]);
                b=sqrt(arr[r]);
                c=sqrt(arr[i]);
                //printf("%f %f %f",a,b,c);
                int x,y,z;
                x=a;
                y=b;
                z=c;
                printf("%d %d %d",x,y,z);
                printf("\n");
                //printf("%d %d %d",int(a),int(b),int(c));
            }
            (arr[l] + arr[r] < arr[i]) ? l++ : r--;
        }
    }
    
}
int main()
{
    int arr[]={3,1,4,6,8,15,17,5};
    int n=sizeof(arr)/sizeof(int);
    pythagoreantriplet(arr,n);
}
