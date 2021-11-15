#include <iostream>
#include <ctime>
#include "int_buffer.h"

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
}

int main() {
    srand(time(0));
    std::cout << "Hello, World!" << std::endl;
    f(int_buffer(10));
    return 0;
}
