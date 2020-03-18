#include <sstream>
#include<typeinfo>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
    stringstream ss(str);
    int temp1;
    char temp2;

    vector<int>v1;
    while(ss>>temp1){
        v1.push_back(temp1);
        ss>>temp2;
    }
    
    return v1;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}

