#include <iostream>
using namespace std;


// Team

int main(){
    int n;
    cin >> n;
    int arr[n][3];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
    }
    
    int sure = 0;
    for(int i = 0;i < n;i++){
        
        int sum = arr[i][0] + arr[i][1] + arr[i][2];
        if(sum >= 2){
            sure++;
        }
        
    }
    cout << sure;
}
