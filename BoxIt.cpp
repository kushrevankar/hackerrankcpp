#include <iostream>

using namespace std;

class Box{
private:
    int Length;
    int Breadth;
    int Height;

public:
    void setLength(int length){
        Length = length;
    }
    int getLength(){
        return Length;
    }
    void setBreadth(int breadth){
        Breadth = breadth;
    }
    int getBreadth(){
        return Breadth;
    }
    void setHeight(int height){
        Height = height;
    }
    int getHeight(){
        return Height;
    }

    Box() : Length(0), Breadth(0), Height(0) {}

    Box(int length, int breadth, int height){
        Length = length;
        Breadth = breadth;
        Height = height;
    }

    long long CalculateVolume() const {
        return static_cast<long long>(Length) * Breadth * Height;
    }

    bool operator<(const Box& other) const {
        if (Length < other.Length) return true;
        if (Length == other.Length && Breadth < other.Breadth) return true;
        if (Length == other.Length && Breadth == other.Breadth && Height < other.Height) return true;
        return false;
    }

    friend ostream& operator<<(ostream& os, const Box& box) {
        os << box.Length << " " << box.Breadth << " " << box.Height;
        return os;
    }
};

int main(){
    Box b1;
    Box b2(2, 3, 4);
    cout << b2.getLength();	// Should return 2
    cout << b2.getBreadth(); // Should return 3
    cout << b2.getHeight();	// Should return 4
    cout << b2.CalculateVolume(); // Should return 24
    bool x = (b1 < b2);	// Should return true based on the conditions given
    cout<<b2; // Should print 2 3 4 in order.
}