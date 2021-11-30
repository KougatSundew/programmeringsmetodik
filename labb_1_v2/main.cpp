// Labb 1, programmeringsmetodik
// Joel Olofsson (jool1904)
// main.cpp, 2021-11-15 - 2021-11-24
// The main function and other functions

#include <iostream>
#include <ctime>
#include "int_buffer.h"
#include "int_sorted.h"
/**
 * Function for generating a random value with max limit
 * @param max - max limit for what a value can be
 * @return - returns an int with the generated value
 */
int random(size_t max) {
    return rand() % max;
}
/**
 * Function  for printing out the elements of a int_buffer
 * @param buff - int_buffer containing the buffer for printing
 */
void print_int_buffer(int_buffer buff) {
    for(auto value: buff) {
        std::cout << value << ", ";
    }
    std::cout << "\n";
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
/**
 * Function for creating a buffer with random inserted values
 * @param number_of_elements - size_t containing the number of elements to create
 * @param max - int containing the highest number the random function should use
 * @return - returns a int_buffer with elements
 */
int_buffer create_random_buffer(size_t number_of_elements, int max) {
    int_buffer tmp_buff(nullptr, 0);
    for(size_t counter = 0; counter < number_of_elements; counter++) {
        tmp_buff.push_back(random(max));
    }
    return tmp_buff;
}
/**
 * Function for printing out the elements of a int_sorted object
 * @param buff - int_buffer containing the sorted buffer for printing
 */
void print_int_sorted(int_sorted sorted_buff) {
    for(const int* p = sorted_buff.begin(); p != sorted_buff.end(); p++) {
        std::cout << *p << ", ";
    }
    std::cout << "\n";
}


int main() {
    srand(time(0));
    //f(int_buffer(10));

    size_t arr_size = 3;
    int arr[3] = {1,2,3};

    int_sorted sorted(arr, arr_size);
    sorted.insert(120);
    sorted.insert(4);
    sorted.insert(1);
    sorted.insert(9);

    print_int_sorted(sorted);
    std::cout << "Is buffer sorted? " << (sorted.is_sorted() ? "true" : "false") << "\n";


    int_buffer buff = create_random_buffer(20, 60);
    std::cout << "Before sorting: " << "\n";
    print_int_buffer(buff);

    int_sorted sorted2(buff.begin(), buff.get_size());
    std::cout << "sort function call: " << "\n";
    print_int_sorted(sorted2);
    std::cout << "is sorted: " << (sorted2.is_sorted() ? "true" : "false") << "\n";

    /*int arr2[10] = {8, 4, 3, 1, 6, 7, 4, 10, 11, 3};
    int_buffer buffTest(arr2, 10);

    int_sorted test = sort(buffTest.begin(), buffTest.end());*/
    return 0;
}
