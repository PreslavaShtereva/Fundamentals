#include<iostream>
#include<cmath>
#include<climits>
using namespace std;

void input(int rows) {
  
    for (int i = 1; i <= rows; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << j << " ";
        }
      
        cout << "\n";
    }
    for (int i = rows - 1; i >= 1; --i) {
        for (int j = 1; j <= i; ++j) {
            cout << j << " ";
        }
      
        cout << endl;
    }
}

    int main() {

        int rows;
        cin >> rows;
      
        input(rows);

 return 0;
}
