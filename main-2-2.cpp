#include <iostream>
#include "function-2-2.cpp"

int main(){
    int array[] = {3,5,20,3,2};
    int n = 5;

    int result  = max_element(array, n);

    std::cout << "the result is: " << result << std::endl;

    return 0;
}