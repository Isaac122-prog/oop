#include <iostream>
#include "function-1-1.cpp"

int main(){
    int numbers[] = {1,2,3,4,5};
    int size = 5;
    int result = array_sum(numbers,size);
    std::cout << "result is: "<< result << std::endl;
    return 0;
}