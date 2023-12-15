//ユーザーが入力した2つの数値のうち大きいほうの値を求めるプログラムがありますが、正しく動作しません。デバッグして修正してください。//
#include <iostream>

int main() {
    int num1{0};
    int num2{0};
    int max{0};

    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    if (num1 > num2) {
        max == num1;
    } else {
        max == num2;
    }
    std::cout << "Maximum is: " << max << std::endl;

    return 0; 
    }