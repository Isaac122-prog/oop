#include <iostream>
#include "function-2-4.cpp"

bool(is_ascending(int array[], int n));

int main(){
    int array[] = {1,2,3,4,5,6,67};
    int n = 7;

    if(is_ascending(array,n)){
        std::cout << "False" << std::endl;
    } else {
        std::cout << "True" << std::endl;
    }
}