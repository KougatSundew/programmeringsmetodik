// Labb 1, programmeringsmetodik
// Joel Olofsson (jool1904)
// int_sorted.h, 2021-11-17 - 2021-11-24
// The headerfile for int_sorted.cpp

#ifndef LABB_1_V2_INT_SORTED_H
#define LABB_1_V2_INT_SORTED_H


#include <cstdlib>
#include "int_buffer.h"

class int_sorted {
    int_buffer buff;
public:
    int_sorted(const int* source, size_t size);
    size_t size() const;
    void insert(int value);
    const int* begin() const;
    const int* end() const;
    int_sorted merge(const int_sorted& merge_with) const;
    bool is_sorted();
};


#endif //LABB_1_V2_INT_SORTED_H
