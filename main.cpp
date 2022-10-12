#include <iostream>
#include <string>
#include <stack>
std::string multiBaseOutput(int num, int b){
    // digitchar[digit] is the charachter that represents
    // The dogit, 0 <= digit <=15
    std::string digitChar = "0123456789ABCDEF";
    std::string numStr = "";

    std::stack<char> stk;  // tO hold the base b digit


    // Extract base b digits right to left and push on stack n
    do {
        // Push right most digit on the stack
        stk.push(digitChar[num % b]);
        num /=b;    // Remove right-most digit from num
    }while(num != 0); // Continue until all digits found


    while (!stk.empty()){
        numStr += stk.top();  // add digit on top of the stack
        stk.pop();   // Pop the stack
    }
    return numStr;
}
int main() {


    int decimal_number, base;
    // prompt for a number >= 0 and base 2 <= B <= 16
    std::cout << "Enter a non negative decimal number and base (2 <= B <= 16)\nOr 0 0 to terminate: ";
    std::cin >> decimal_number >> base;


    while(base != 0){
        std::cout << "[  " << decimal_number << " base " << base << " is " << multiBaseOutput(decimal_number, base)
        << "  ]"<< std::endl;

        std::cout << "Enter a non negative decimal number and base (2 <= B <= 16)\nOr 0 0 to terminate: ";
        std::cin >> decimal_number >> base;
    }





    return 0;
}
