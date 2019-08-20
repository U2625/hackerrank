#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int max, current = 0;  
      while (n > 0) 
      {  
           if (n % 2 == 1)
           {  
                current++;  
                if (current > max)  
                     max = current;  
           } else 
           {  
                current = 0;  
           }  
           n /= 2;  
      }  
      cout << max;  

    return 0;
}
