#include <iostream>
void makey(int num1);
int main() {
    int LineAmount = 0;
    std::cin >> LineAmount;
    if (LineAmount <= 0) {
        std::cout << "INVALID AMOUNT" << std::endl;
        return 0;
    }
    else {
        makey(LineAmount);
    }
}
void makey(int linewhatyouwant) {
    int num1;
    for (num1 = 0; num1 < linewhatyouwant; num1++) {
        num1 + 1;
        std::cout << " ";
        std::string stuff(num1, '#');
        std::cout << stuff << std::endl;
    }
}


