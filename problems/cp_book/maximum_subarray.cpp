#include <iostream>
#include <stdio.h>
using namespace std;

// chapter 2

int main ()
{

    //maximum subarray sum brute force
    /*
    int array[8] = {-1, 2, 4, -3, 5, 2, -5, 2};
    int best = 0;
    for(int a = 0; a < 8; a++){
        for(int b = a; b < 8; b++){
            int sum = 0;
            for(int k = a; k <= b; k++){
                sum += array[k];
            }
            best = max(best, sum);
        }
    }
    cout << best;
    */

    //maximum subarray sum O(n^2)
    /*
    int array[8] = {-1, 2, 4, -3, 5, 2, -5, 2};
    int best = 0;
    for(int a = 0; a < 8; a++){
        int sum = 0;
        for(int b = a; b < 8; b++){
            sum += array[b];
            best = max(best, sum);
        }
    }
    cout << best;
    */

    //kodane algorithm
    int array[8] = {-1, 2, 4, -3, 5, 2, -5, 2};
    int best = 0;
    int current_sum = 0;
    for(int s = 0;s < 8; s++){
        current_sum = max(0, current_sum+array[s]);
        best = max(best, current_sum);
    }
    cout << best;
}