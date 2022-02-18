#include"iostream"

using namespace std;



int main()
{
    int n=10;
    int arr[10]={-2,5,11,34,56,999,-9494,2,3,1};

    for(int i=1;i<n;i++)
    {
        int temp=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>temp)
        {
            arr[j+1]=arr[j];
            j--;


        }
        arr[j+1]=temp;


    }
    for(int k=0;k<n;k++)
    {
        cout<<arr[k]<<" ";
    }
    

    return 0;
}