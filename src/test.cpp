#include <iostream>
#include "test.h"
using namespace std;

test :: test(int *a, int arrSize){
    //max=0; min=0; avg=0;
    findMaxMinAvg(a, arrSize, max, min, avg);
    cout << "minimum value is " << min << endl;
    cout << "maximum value is " << max << endl;
    cout << "average value is " << avg << endl;
}

void test :: findMaxMinAvg(int *a, int n, int& max1, int& min1, int& avg1){
    max1 = *a;
    min1 = *a;
    for(int i=1; i<n; i++){
        if(max < *(a+i)) max = *(a+i);
        if(min > *(a+i)) min = *(a+i);
        avg = (max + min)/2;
    }
    return;
}