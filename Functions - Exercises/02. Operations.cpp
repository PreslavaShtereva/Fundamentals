#include<iostream>
#include<cmath>
#include<climits>
using namespace std;

int add(int op1, int op2) {
    return op1 + op2;
}

int multip(int op1, int op2) {
    return op1 * op2;
}

int division(int op1, int op2) {
    return op1 / op2;
}

int substr(int op1, int op2) {
    return op1 - op2;
}
  

 int main(void) {
      
     int op1, op2;
     char operation;
     cin >> op1 >> op2 >> operation;

     int result;

     switch (operation) {
            
     case '+':result = add(op1, op2); break;
     case '*':result = multip(op1, op2); break;
     case '-':result = substr(op1, op2); break;  
     case '/':
            
        if (op2 == 0) {
           cout << "Can't divide by zero.";
           return 1;
         }
           result = division(op1, op2); 
           break; 
        }
      
        cout << result;
      
return 0;
}
