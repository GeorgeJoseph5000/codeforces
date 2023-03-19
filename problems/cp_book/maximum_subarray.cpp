#include <iostream>
#include <stdio.h>
using namespace std;

int main ()
{
    int array[8] = {-1, 2, 4, -3, 5, 2, -5, 2};
    int best = 0;
    for(int s = 0;s < 8; s++){
        int sum = 0;
        for(int e = s;e < 8; e++){
            sum += array[e];

            best = max(best, sum);
        }
    }
    cout << best;
}