#include <iostream>  
  
using namespace std;  
  
void merge(int a[], int start, int middle, int end)    
{    
    int i, j, k;  
    int n1 = middle - start + 1;    
    int n2 = end - middle;     
    int LeftArray[n1], RightArray[n2]; 
    for (int i = 0; i < n1; i++)    
    LeftArray[i] = a[start + i];    
    for (int j = 0; j < n2; j++)    
    RightArray[j] = a[middle + 1 + j];      
    i = 0; 
    j = 0;   
    k = start;  

    while (i < n1 && j < n2)    
    {    
        if(LeftArray[i] <= RightArray[j])    
        {    
            a[k] = LeftArray[i];    
            i++;    
        }    
        else    
        {    
            a[k] = RightArray[j];    
            j++;    
        }    
        k++;    
    }    
    while (i<n1)    
    {    
        a[k] = LeftArray[i];    
        i++;    
        k++;    
    }    
      
    while (j<n2)    
    {    
        a[k] = RightArray[j];    
        j++;    
        k++;    
    }    
}    
  
void mergeSort(int a[], int start, int end)  
{  
    if (start < end)   
    {  
        int middle = (start + end) / 2;  
        mergeSort(a, start, middle);  
        mergeSort(a, middle + 1, end);  
        merge(a, start, middle, end);  
    }  
}  
  
void printArray(int a[], int n)  
{  
    int i;  
    for (i = 0; i < n; i++)  
        cout<<a[i]<<" ";  
}  
  
int main()  
{  
    int a[] = { 11, 30, 24, 7, 31, 16, 39, 41 };  
    int n = sizeof(a) / sizeof(a[0]);    
    mergeSort(a, 0, n - 1);  
    cout<<"\nAfter sorting array elements are - \n";  
    printArray(a, n);  
    return 0;  
}
