// in selection sort it swaps the initial and minimum values
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter number of elements";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    
    for(int i=0;i<n-1; i++){
        int min=i;
        for (int j=1 ; j<n ;j++){
            if (arr[j]< arr[min])
            {
                min=j;}
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
    }
}
