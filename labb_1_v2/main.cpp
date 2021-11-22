#include <iostream>
#include <ctime>
#include "int_buffer.h"
#include "int_sorted.h"

int random(size_t max) {
    return rand() % max;
}

void f(int_buffer buff) {
    for(int* i = buff.begin(); i != buff.end(); i++) {
        *i = random(10);
    }
    for(const int* i = buff.begin(); i != buff.end(); i++) {
        std::cout << *i << ", ";
    }
    /*for(auto e: buff) {
        std::cout << e << ", ";
    }*/
    std::cout << std::endl;
}

int main() {
    srand(time(0));
    std::cout << "Hello, World!" << std::endl;
    //f(int_buffer(10));

    size_t arr_size = 3;
    int arr[3] = {1,2,3};

    int_sorted sorted(arr, arr_size);
    for(const int* i = sorted.begin(); i != sorted.end(); i++) {
        std::cout << *i << ", ";
    }
    sorted.insert(4);
    for(const int* i = sorted.begin(); i != sorted.end(); i++) {
        std::cout << *i << ", ";
    }
    return 0;
}
