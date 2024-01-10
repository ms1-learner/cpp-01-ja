#include <iostream>

double radiansToDegrees(double radians);
double degreesToRadians(double degrees);

int main(){
    double degrees { 30 };
    std::cout << degrees << " degrees in radians: " <<
    degreesToRadians(degrees) << std::endl;

    double radians { 2.54 };
    std::cout << radians << "radians in degress: " <<
    radiansToDegrees(radians) << std::endl;

}