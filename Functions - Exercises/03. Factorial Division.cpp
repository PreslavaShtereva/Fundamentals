#include<iostream>
#include<cmath>
#include<climits>
using namespace std;

long long factorial(long long n) {
  
    if (n <= 1) {
        return 1;
    }
    else {
        return n * factorial(n - 1);
    }
}

    int main(void) {
        long long n1, n2;
        cin >> n1 >> n2;

        cout.setf(ios::fixed);
        cout.precision(2);


        cout << factorial(n1) / (double)factorial(n2);
        
return 0;
}
