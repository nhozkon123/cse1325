#include "fraction.h"



int main (){
    Fraction f1, f2;
    std::cout << "Enter Fraction 1" << std::endl;
    std::cin >> f1;
    std::cout << "Enter Fraction 2" << std::endl;
    std::cin >> f2;
    
    Fraction addResult = f1 + f2;
    std::cout << "\nResult: " << addResult << std::endl;
    
    Fraction subResult = f1 - f2;
    std::cout << "\nResult: " << subResult << std::endl;
    
    Fraction mulResult = f1 * f2;
    std::cout << "\nResult: " << mulResult << std::endl;
    
    Fraction divResult = f1 / f2;
    std::cout << "\nResult: " << divResult << std::endl;
    return 0;
    
}
