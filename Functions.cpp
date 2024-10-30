#include <iostream>

using namespace std;

void greatest(int w,int x,int y,int z){
    if(w > x && w > y && w > z){
        cout << w;
    } else if(x > w && x > y && x > z){
        cout << x;
    } else if(y > w && y > x && y > z){
        cout << y;
    } else {
        cout << z;
    }
}

int main(){
    int a, b, c, d;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    greatest(a, b, c, d);
}