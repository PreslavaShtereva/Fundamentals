#include <iostream>
#include <string>

using namespace std;

int main() {
  
    string input;
    getline(cin, input);

    char before = '\0'; 
  
    for (char c : input) {
      
        if (c == before && c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u') {
            continue; 
        }
      
        else {
            cout << c; 
            before = c;
        }
    }


    return 0;
}
