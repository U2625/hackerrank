#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
   
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    map<string, int> phonebook;
    std::map<char,int>::iterator it;

    string name;
    int num;

    for (int i = 0; i < n; i++)
    {
        cin >> name;
        cin >> num;
        phonebook.insert (pair<string, int>(name, num));
    }

    while (cin >> name)
    {
        if (phonebook.find (name) == phonebook.end())
        {
            cout << "Not found" << endl;
        } 
        else 
        {
            cout << name << "=" << phonebook.find(name)->second << endl;
        }
    }
}
