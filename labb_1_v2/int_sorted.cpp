//
// Created by Joel Olofsson on 2021-11-17.
//

#include <iostream>
#include "int_sorted.h"

int_sorted::int_sorted(const int *source, size_t size): buff(source, size), sz(size) {
}

size_t int_sorted::size() const {
    return sz;
}

void int_sorted::insert(int value) {
    std::cout << "INSERT CALLED" << std::endl;
    sz++;
    int_buffer tmp(buff);
    int index = sz;
    tmp[index] = value;
    buff.swap(tmp);
    std::cout << tmp[3] << "\n";
}

const int *int_sorted::begin() const {
    return buff.begin();
}

const int *int_sorted::end() const {
    return buff.end();
}

int_sorted int_sorted::merge(const int_sorted &merge_with) const {
    return int_sorted(nullptr, 0);
}
