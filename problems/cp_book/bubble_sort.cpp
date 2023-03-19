#include <iostream>
#include <stdio.h>
using namespace std;


// chapter 3

int main(){
    int n = 8;
    int array[] = {1,3,8,2,9,2,5,6};
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(array[j+1] < array[j]){
                swap(array[j], array[j+1]);
            }
        }   
    }

}