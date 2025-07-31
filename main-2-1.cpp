#include <iostream>
#include "function-2-1.cpp"

int main(){
    int numbers[] = {2,3,6,3,1,2,6};
    int n = 7;

    int result = min_element(numbers, n);

    std::cout << "The result is: " << result << std::endl;
}