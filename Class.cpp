#include <iostream>
using namespace std;

class Student {
private:
    int Age;
    string Fname;
    string Lname;
    int Standard;

public:
    Student(int age, string fname, string lname, int standard) {
        Age = age;
        Fname = fname;
        Lname = lname;
        Standard = standard;
    }

    void introduce() {
        cout << Age << endl;
        cout << Lname << ", ";
        cout << Fname << endl;
        cout << Standard << endl;
        cout << "\n";
        cout << Age << "," << Fname << "," << Lname << "," << Standard;
    }
};

int main() {
    int a;
    cin >> a;
    cin.ignore();

    string f;
    getline(cin, f);

    string l;
    getline(cin, l);

    int s;
    cin >> s;

    Student st1(a, f, l, s);

    st1.introduce();
}
