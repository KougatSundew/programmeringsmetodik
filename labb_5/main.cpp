//
// Created by jolof on 2021-12-14.
//


#include <iostream>
#include <array>
#include <vector>
#include <algorithm>
#include <numeric>
#include "CPU.h"

struct MyPrint {
    void operator()(const CPU& cpu) {
        std::cout << cpu.getName()<< ", " << cpu.getFreq() << " Ghz" << "\n";
    }
};

struct Greater {
    double freq;
public:
    Greater(double freq):freq(freq){};
    bool operator()(const CPU& cpu) {
        return cpu.getFreq() >= freq;
    }
};

struct MyBinOp {
    size_t size;
    MyBinOp(size_t size):size(size) {};
    double operator()(double value, const CPU& cpu) {
        return value += cpu.getFreq() / size;
    }
};

int main() {
    std::array<CPU, 7> cpuArr = {
            CPU("Intel i7", 4.8),
            CPU("Intel i7", 4.6),
            CPU("Intel i5", 4.5),
            CPU("Intel i3", 4.0),
            CPU("Intel i9", 5.0),
            CPU("AMD 9 3900x", 4.8),
            CPU("AMD 9 5900x", 4.9)
    };
    //Copy construct from array
    std::vector<CPU> cpuVector(cpuArr.begin(), cpuArr.end());

    std::cout << "(1) - print the vectors content with for_each" << "\n";
    MyPrint printer;
    std::for_each(cpuVector.begin(), cpuVector.end(), printer);
    std::cout << "\n";

    double freq = 4.6;
    std::cout << "(2) - Use std::find_if to find first CPU with frequency greater than " << freq << "\n";
    std::cout << "found: ";
    auto found = std::find_if(cpuVector.begin(), cpuVector.end(), Greater(freq));
    if(found != cpuVector.end())
        printer(*found);
    std::cout << "\n";

    std::cout << "(3) - Use std::adjacent_find to find cpu's with same name" << "\n";
    std::cout << "found: ";
    auto found_with_adjacent = std::adjacent_find(cpuVector.begin(), cpuVector.end());
    if(found_with_adjacent != cpuVector.end())
        printer(*found_with_adjacent);
    else
        std::cout << "NONE" << "\n";
    std::cout << "\n";

    std::cout << "(4) - Use std::equal to check the equality of the content in the array and vector" << "\n";
    if (std::equal(cpuVector.begin(), cpuVector.end(), cpuArr.begin()))
        std::cout << "The array and vector is equal" << "\n";
    else
        std::cout << "The array and vector is not equal" << "\n";
    std::cout << "\n";

    std::cout << "(5) - Use std::search" << "\n";
    auto found_with_search = std::search(cpuVector.begin(), cpuVector.end(), cpuArr.begin() + 1, cpuArr.begin() + 3);
    if(found_with_search != cpuVector.end()) std::for_each(found_with_search, found_with_search + 3, printer);
    std::cout << "\n";

    std::cout << "(6) - Use std::accumulate to calc mean of all cpu frequencies" << "\n";
    MyBinOp binOp(cpuVector.size());
    auto mean = std::accumulate(cpuVector.begin(), cpuVector.end(), 0.0, binOp);
    std::cout << "mean CPU freq: " << mean << std::endl;
    std::cout << "\n";

    return 0;
}
