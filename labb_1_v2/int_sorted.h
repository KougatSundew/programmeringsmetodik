//
// Created by Joel Olofsson on 2021-11-17.
//

#ifndef LABB_1_V2_INT_SORTED_H
#define LABB_1_V2_INT_SORTED_H


#include <cstdlib>
#include "int_buffer.h"

class int_sorted {
    int_buffer buff;
    size_t sz;
public:
    int_sorted(const int* source, size_t size);
    size_t size() const;
    void insert(int value);
    const int* begin() const;
    const int* end() const;
    int_sorted merge(const int_sorted& merge_with) const;
};


#endif //LABB_1_V2_INT_SORTED_H
