//
// Created by Joel Olofsson on 2021-11-15.
//

#ifndef LABB_1_V2_INT_BUFFER_H
#define LABB_1_V2_INT_BUFFER_H

#include <cstdlib>
#include <algorithm>

class int_buffer {
    size_t size;
    int *begin_ptr;

public:
    //Flytta till rätt position
    void swap(int_buffer rhs);
    explicit int_buffer(size_t size);
    int_buffer(const int* source, size_t size);
    int_buffer(const int_buffer& rhs); // copy construct
    int_buffer(int_buffer&& rhs) noexcept ; // move construct
    int_buffer& operator=(const int_buffer& rhs);
    int_buffer& operator=(int_buffer&& rhs) noexcept; // move assignment
    int& operator[](int index);
    const int& operator[](size_t index) const;
    //Access
    [[nodiscard]] size_t get_size() const;
    int* begin();
    int* end();
    [[nodiscard]] const int* begin() const;
    [[nodiscard]] const int* end() const;
    //Destructor
    ~int_buffer();
};


#endif //LABB_1_V2_INT_BUFFER_H
