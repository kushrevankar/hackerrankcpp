#include <iostream>

using namespace std;

class Rectangle{
private:
    int Width;
    int Height;

public:
    Rectangle(int width, int height){
        Height = height;
        Width = width;
    }

    void area(){
        cout << Width << " " << Height << endl;
        int area = Width * Height;
        cout << area << endl;
    }
};

int main(){
    int l, b;
    cin >> l >> b;
    Rectangle r1(l, b);
    r1.area();
}