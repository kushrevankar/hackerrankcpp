#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

class Student{
private:
    vector<int> scores;

public:
    void input(){
        int a, b, c, d, e;
        cin >> a >>  b >> c >> d >> e;
        scores = {a, b, c, d, e};
    }

    int calculateTotalScore(){
        int x = 0;
        for(int num : scores){
            x = x + num;
        }
        return x;
    }
};

int main() {
    int n;
    cin >> n;
    Student *s = new Student[n];
    
    for(int i = 0; i < n; i++){
        s[i].input();
    }

    int kristen_score = s[0].calculateTotalScore();

    int count = 0; 
    for(int i = 1; i < n; i++){
        int total = s[i].calculateTotalScore();
        if(total > kristen_score){
            count++;
        }
    }

    cout << count;
    
    return 0;
}
