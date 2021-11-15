//
// Created by Joel Olofsson on 2021-11-15.
//

#include "int_buffer.h"

int_buffer::int_buffer(size_t size): size(size), begin_ptr(new int[size]) {

}

int_buffer::int_buffer(const int *source, size_t size): begin_ptr(const_cast<int *>(source)), size(size) {

}

int_buffer::int_buffer(const int_buffer &rhs) {
    std::copy(rhs.begin_ptr, rhs.begin_ptr + size, begin_ptr);
}

int_buffer::int_buffer(int_buffer && rhs) noexcept:begin_ptr(nullptr), size(0) {
    swap(rhs);
}

int_buffer::~int_buffer() {
 delete[] begin_ptr;
}


int_buffer &int_buffer::operator=(const int_buffer &rhs) {
    int_buffer tmp(rhs);
    swap(tmp);
    return *this;
}

int_buffer &int_buffer::operator=(int_buffer && rhs) noexcept {
    swap(rhs);
}

int &int_buffer::operator[](int index) {
    return begin_ptr[index];
}

const int &int_buffer::operator[](size_t index) const {
    return begin_ptr[index];
}

size_t int_buffer::get_size() const {
    return size;
}

int *int_buffer::begin() {
    return begin_ptr;
}

int *int_buffer::end() {
    return begin_ptr + size;
}

const int *int_buffer::begin() const {
    return begin_ptr;
}

const int *int_buffer::end() const {
    return begin_ptr + size;
}

void int_buffer::swap(int_buffer rhs) {
    std::swap(rhs.begin_ptr, begin_ptr);
    std::swap(rhs.size, size);
}
