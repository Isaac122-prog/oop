#include <iostream>
#include "function-1-5.cpp"

int main(){
    int number = 0;
    std::cout << "Enter a number: " << std::endl;
    std::cin >> number;
    int result = count_evens(number);

    std::cout << "The result is: " << result << std::endl;
}