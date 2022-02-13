#include"iostream"

using namespace std;

//defining a swap function
void swapped(int a[],int i,int j)
{
    int temp;
    temp=a[i];
    a[i]=a[j];
    a[j]=temp;
}

 int main()
 {
     
     int i,j;
     int n=10;
     int arr[n]={22,50,12,200,325,0,55,852,-14,3};

     for(i=0;i<n-1;i++)
     {
         // if array is already sorted then swap variable help to terminate the for loop 
         bool swap=true;
         for(j=0;j<n-i-1;j++)
         {
             if(arr[j+1]<arr[j])
             {
                 swap=false;
                 swapped(arr,j+1,j);
             }
         }
         if(swap)
         {
             break;
         }

     }

     for(int m=0;m<n;m++)
     {
         cout<<arr[m]<<" ";
     }

     
 }