#include <iostream>
#include <string>

using namespace std;

int main(){
    string a, b;
    getline(cin, a);
    getline(cin, b);

    string concat = a + b;

    cout << a.length() << " " << b.length() << endl;
    cout << concat << endl;

    char temp = a[0];
    a[0] = b[0];
    b[0] = temp;

    cout << a << " " << b << endl;
}