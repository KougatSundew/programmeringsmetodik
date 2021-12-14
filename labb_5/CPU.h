//
// Created by jolof on 2021-12-14.
//

#ifndef LABB_5_CPU_H
#define LABB_5_CPU_H
#include <string>

class CPU {
    std::string name;
    double frequency;
public:
    CPU(std::string name, double freq);

    std::string getName();
    double getFreq();
    std::string getName() const;
    double getFreq() const;

    bool operator==(const CPU& rhs);
};


#endif //LABB_5_CPU_H
