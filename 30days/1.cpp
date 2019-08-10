#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

// Declare second integer, double, and String variables.
    int a;
    double b;
    string c;

// Read and save an integer, double, and String to your variables.
    std::cin >> a;
    std::cin >> b;
    getline(cin, c);
    getline(cin, c);
    
// Print the sum of both integer variables on a new line.
// Print the sum of the double variables on a new line.
// Concatenate and print the String variables on a new line
    std::cout << i + a << std::endl;
    printf("%.1f\n", d + b);    //cout.precision(1); cout << fixed << d + b << endl;
    std::cout << s + c << std::endl;

    return 0;
}
