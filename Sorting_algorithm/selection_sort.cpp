#include"iostream"

using namespace std;

void swap(int arr[],int i,int j)
{
    int temp;
    temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}

int main()
{
    int n=10;
    int arr[n]={16,20,-4,0,789,5215,-4561,205,2,888};

    int i,j;

    for(i=0;i<n-1;i++)
    {
        int min=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }
        if(min!=i)
        {
            swap(arr,min,i);
        }
    }

    for(int m=0;m<n;m++)
    {
        cout<<arr[m]<<" ";
    }
}