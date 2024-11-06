#include <iostream>

using namespace std;

void update(int* x, int* y){
    int temp = *x;
    *x = *x + *y;
    *y = abs(*x - *y);
}

int main(){
    int a, b;
    int* pa = &a;
    int* pb = &b;

    cin >> a >> b;
    update(pa, pb);

    cout << a << endl;
    cout << b << endl;

}