#include<iostream>
#include<cmath>
#include<climits>
using namespace std;

int factorial(long long n) {
}
    int main(void) {
   
        long n;
        cin >> n;

        unsigned sumOdd = 0;
        unsigned sumEven = 0; 
        bool first = false;

        while (n) {
            int singles = n % 10;
            if (singles%2)
                sumEven += singles;
            else
                sumOdd += singles;

           
            n = n / 10;
        }
        cout << sumEven * sumOdd << '\n';

        
return 0;
}
