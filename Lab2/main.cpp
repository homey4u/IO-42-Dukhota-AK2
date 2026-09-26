#include <iostream>
#include "calculator.h"

int main() {
    Calculator calc;
    std::cout << "5 + 7.2 = " << calc.Add(5, 7.2) << std::endl;
    std::cout << "10 - 4 = " << calc.Sub(10, 4) << std::endl;
    return 0;
}
