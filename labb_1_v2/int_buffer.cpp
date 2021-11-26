// Labb 1, programmeringsmetodik
// Joel Olofsson (jool1904)
// int_buffer.cpp, 2021-11-175- 2021-11-26
// The definitions of int_buffer object

#include "int_buffer.h"

int_buffer::int_buffer(size_t size): size(size), begin_ptr(new int[size]) {

}

int_buffer::int_buffer(const int *source, size_t size):int_buffer(size) {
    std::copy(source, source + size, begin_ptr);
}

int_buffer::int_buffer(const int_buffer &rhs):int_buffer(rhs.begin_ptr, rhs.size) {
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
    return *this;
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

void int_buffer::push_back(int value) {
    int_buffer tmp_buff(begin(), size + 1);
    tmp_buff[static_cast<int>(tmp_buff.get_size() - 1)] = value;
    swap(tmp_buff);
}
