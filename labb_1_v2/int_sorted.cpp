// Labb 1, programmeringsmetodik
// Joel Olofsson (jool1904)
// int_sorted.cpp, 2021-11-17 - 2021-11-26
// The definitions of int_sorted object

#include <iostream>
#include "int_sorted.h"
//Det är en merge sort där vi delar upp arrayen i delar tills vi har individuella delar och sedan slår ihop det, log(n)
/**
 * Function for merge-sort a buffer
 * @param begin - pointer to beginning of buffer
 * @param end - pointer to end of buffer
 * @return - returns an sorted int_sorted object
 */
int_sorted sort(const int* begin, const int* end) {
    if(begin == end) return int_sorted(nullptr, 0);
    if(begin == end - 1) return int_sorted(begin, 1);

    ptrdiff_t half = (end-begin) / 2;
    const int* mid = begin + half;
    return sort(begin, mid).merge(sort(mid, end));
}
int_sorted::int_sorted(const int *source, size_t size): buff(source, size) {
    if(size > 1) {
        buff = sort(begin(), end()).buff;
    }
}

size_t int_sorted::size() const {
    return buff.get_size();
}

void int_sorted::insert(int value) {
    buff.push_back(value);
    buff = sort(buff.begin(), buff.end()).buff;
}

const int *int_sorted::begin() const {
    return buff.begin();
}

const int *int_sorted::end() const {
    return buff.end();
}
//TODO ✔: fixa så att merge vid insättning använder sig av antigen iterator eller [] index operatorn, istället för push_back.
//TODO ✔: vid return så kommer det att bli en infinite loop, för att konstuerarn för int_sorted blir kallad se rad 24 - 26.
int_sorted int_sorted::merge(const int_sorted &merge_with) const {
    //Init the buffer with the total size of two buffers
    int_buffer tmp_merged_buffers(size() + merge_with.size());
    //Init iterator pointer to the two buffers and the tmp_merged_buffers
    int* it_ptr_merged_buffer = tmp_merged_buffers.begin();
    const int* it_ptr_a = begin();
    const int* it_ptr_b = merge_with.begin();
    //then walk the two buffers
    while(it_ptr_a != end() && it_ptr_b != merge_with.end()) {
        int value_a = *it_ptr_a;
        int value_b = *it_ptr_b;
        if(value_a < value_b) {

            *it_ptr_merged_buffer = value_a;
            it_ptr_a++;
        } else {
            *it_ptr_merged_buffer = value_b;
            it_ptr_b++;
        }
        it_ptr_merged_buffer++;
    }
    //if one buffer is longer than the other this will be run
    while(it_ptr_a != end()) {
        *it_ptr_merged_buffer = *it_ptr_a;
        it_ptr_a++;
        it_ptr_merged_buffer++;
    }
    while(it_ptr_b != merge_with.end()) {
        *it_ptr_merged_buffer = *it_ptr_b;
        it_ptr_b++;
        it_ptr_merged_buffer++;
    }
    //for not making the program running in a infinite loop on return of int_sorted object, beacuse of the if statement on row 24 - 26
    int_sorted sorted_buffer(nullptr, 0);
    sorted_buffer.buff = tmp_merged_buffers;

    return sorted_buffer;
}

bool int_sorted::is_sorted() {
    int init_value = *buff.begin();
    for(int *p = buff.begin() + 1; p != buff.end(); p++) {
        int value = *p;
        if(init_value > value)
            return false;
        init_value = value;
    }
    return true;
}
