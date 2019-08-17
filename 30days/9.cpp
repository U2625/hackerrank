#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>

int factorial(int N) 
{
    if (N > 1)
        return N * factorial(N-1);
    return 1;
}   

int main()
{
    int N;
    std::cin >> N;
    cin.ignore();

    std::cout << factorial(N) << std::endl;

    return 0;
}
