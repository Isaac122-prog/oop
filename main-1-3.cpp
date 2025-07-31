#include <iostream>
#include "function-1-3.cpp"

int main(){
    int fun[] = {1,2,3,4,5,3,4,5,2};
    int n = 9;
    int number = 2;

    int result =  num_count(fun, n, number);

    std::cout << "The result is: " << result << std::endl;
}
