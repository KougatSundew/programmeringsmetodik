//
// Created by jolof on 2021-12-14.
//

#include "CPU.h"
/**
 * Constructor
 * @param name - name of cpu with type string
 * @param freq - frequency of cpu with type double
 */
CPU::CPU(std::string name, double freq):name(name), frequency(freq) {}
/**
 * Function for getting the name of the cpu
 * @return - returns type string containing the name
 */
std::string CPU::getName() {
    return name;
}
/**
 * Function for getting the frequency of the cpu
 * @return - returns type double with freq
 */
double CPU::getFreq() {
    return frequency;
}
/**
 * operator overload on == to se if the name of the cpu is equal to the parameter
 * @param rhs - element of type const CPU&
 * @return - returns if curr CPU name is equal to the rhs name, can be true or false
 */
bool CPU::operator==(const CPU &rhs) {
    return name == rhs.name;
}
/**
 * const function for getting the name of the cpu
 * @return - returns type string
 */
std::string CPU::getName() const {
    return name;
}
/**
 * const function for getting the frequency of the cpu
 * @return - returns type double
 */
double CPU::getFreq() const {
    return frequency;
}
