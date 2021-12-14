//
// Created by jolof on 2021-12-14.
//

#include "CPU.h"

CPU::CPU(std::string name, double freq):name(name), frequency(freq) {}

std::string CPU::getName() {
    return name;
}

double CPU::getFreq() {
    return frequency;
}

bool CPU::operator==(const CPU &rhs) {
    return name == rhs.name;
}

std::string CPU::getName() const {
    return name;
}

double CPU::getFreq() const {
    return frequency;
}
