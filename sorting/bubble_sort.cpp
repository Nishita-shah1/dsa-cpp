// in bubble sort it pushes the maximum value to last by adjacent swaps
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
    for (int i=0; i<n-1; i++){
        for (int j=0; j<n-i-1; j++){
            if (arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        
    }
        }
    for(int i=0; i<n; i++){
            cout<<arr[i]<<" ";
    }
    return 0;
}
