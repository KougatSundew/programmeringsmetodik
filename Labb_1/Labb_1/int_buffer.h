#pragma once
#ifndef INT_BUFFER_H
#define INT_BUFFER_H

class int_buffer {
public:
	explicit int_buffer(size_t size);
	int_buffer(const int* source, size_t size);	
	int_buffer(const int_buffer& rhs); // copy cconstruct
	int_buffer(int_buffer&& rhs); // move construct
	int_buffer& operator=(const int_buffer& rhs);
	int_buffer& operator=(int_buffer&& rhs); // move assignment
	int& operator[](size_t index);
	const int& operator[](size_t index) const;
	size_t size() const;
	int* begin();
	int* end();
	const int* begin() const;
	const int* end() const;
	~int_buffer();
};
#endif /* INT_BUFFER_H */