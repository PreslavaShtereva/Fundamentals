#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int x;
    cin >> x;

    if (x <= 0) {     //non-positive number
        cout << "No";
        return 0;
    }

    vector<int> num(x);
    double sum = 0.0;

    for (size_t i = 0; i < x; i++) {
        cin >> num[i];
        sum += num[i];
    }

    double average = sum / x;
    vector<int> lower;

    for (int i = 0; i < x; i++) {
        if (num[i] < average && num[i] % 2 == 0) {
            lower.push_back(num[i]);
        }
    }

    if (lower.empty()) {   //no numbers hold the above property
        cout << "No";
        return 0;
    }

    sort(lower.rbegin(), lower.rend());

    for (int i = 0; i < lower.size(); i++) {
        cout << lower[i] << " ";
    }
  

    return 0;
}
