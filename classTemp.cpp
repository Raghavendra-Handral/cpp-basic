#include <iostream>
using namespace std;

template <class genData1, class genData2>
genData2 add(genData1 a, genData2 b){
    return (a+b);
}

int main (){
    int a;
    float b;

    cout << "Enter integer value" << endl;
    cin >> a;
    cout << "Enter float value" << endl;
    cin >> b;
    cout << add(a, b) << endl;
}