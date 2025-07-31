#include <iostream>
#include "function-1-2.cpp"

int main(){
    int numbers[] = {2,3,4,6,3,2,6};
    int n = 7;

    float result = array_mean(numbers, n);

    std::cout << "the result is: " << result << std::endl;
}