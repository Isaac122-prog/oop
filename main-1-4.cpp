#include <iostream>
#include "function-1-4.cpp"

int main(){
    int array[] = {1,2,34,5,3,213};
    int secondarray[] = {3,235,6,4,23,5};
    int n = 3;

    int result = sum_two_arrays(array, secondarray, n);

    std::cout << "the result is: " << result << std::endl;
    return 0;
}