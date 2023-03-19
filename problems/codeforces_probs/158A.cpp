#include <iostream>
using namespace std;

// Next Round

int main(){
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k_score = arr[k-1];
    int size = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] >= k_score && arr[i] > 0){
            size++;
        }
    }
    cout << size;
}