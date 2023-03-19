#include <iostream>
using namespace std;



int main() {
    int n;
    int x = 0; 
    cin >> n;
    string arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for(int i = 0;i < n;i++)
    {
        if(arr[i][0] == '+' || arr[i][2] == '+'){
            x++;
        }else if(arr[i][0] == '-' || arr[i][2] == '-'){
            x--;
        }
    }
    cout << x;
    
}