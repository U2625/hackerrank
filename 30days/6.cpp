#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int T;
    cin >> T;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    string s;
    for (int i = 0; i < T; i++)
    {
        getline(cin, s);
        for (int j = 0; j < s.length(); j+=2)
        {
            cout << s[j];
        }
        cout << " " ;
        for (int j = 1; j < s.length(); j+=2)
        {
            cout << s[j];
        }
        cout << endl;
    }
   
    return 0;
}
