#include<iostream>
#include<cmath>
#include<climits>
using namespace std;

double calculateDistance(double x, double y) {
  
    return x * x + y * y;
}

void outputPoint(double x, double y) {
  
    cout << '(' << x << ", " << y << ')' << '\n';
}



 int main(void) {
   
    double x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
   
    if (calculateDistance(x1, y1) <= calculateDistance(x2, y2)) {
        outputPoint(x1, y1);
    }
     else {
         outputPoint(x2, y2);
     }

return 0;
}
