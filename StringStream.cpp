#include <iostream>
#include <sstream>
#include <vector>
#include <string>

using namespace std;

vector<int> parseInts(string str){
    vector<int> lostcause;
    stringstream ss(str);
    string numbers;
    while (getline(ss, numbers, ',')){
        int num = stoi(numbers);
        lostcause.push_back(num);
    }
    return lostcause;
}

int main(){
    string str;
    getline(cin, str);
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++){
        cout << integers[i] << endl;
    }
    return 0;
}