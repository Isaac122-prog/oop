#include <iostream>
#include "function-2-5.cpp"

bool is_descending(int array[], int n);

int main(){
    int array[] = {6,3,2,1};
    int n = 4;

    if(is_descending(array,n)){
        std::cout << "Flase" << std::endl;
    } else {
        std::cout << "True" << std::endl;
    }   
}