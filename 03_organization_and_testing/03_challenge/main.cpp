#include "math_operation.h"
#include "iostream"
#include <stdexcept>


int main(){
    float num1;
    float num2;
    float out;
    char symbol;

 if ( symbol == '+'){
    out = MathOps::addition(num1, num2);
 }else if ( symbol == '-'){
    out = MathOps::subtraction(num1, num2);
 }else if ( symbol == '*'){
    out = MathOps::multiplication(num1, num2);
 }else if ( symbol == '/'){
    out = MathOps::division(num1, num2);
 } 

 std::cout<<"Result"<<out<< std::endl;
 return 0;
 
}


