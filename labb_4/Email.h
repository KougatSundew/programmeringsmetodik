//
// Created by jolof on 2021-12-07.
//

#ifndef LABB_4_EMAIL_H
#define LABB_4_EMAIL_H

#include <string>

struct CompWhoDateSubject;
struct CompDateWhoSubject;
struct CompSubjectWheDate;

class Email {
    std::string who, date, subject;
public:
    Email(std::string who = "", std::string date = "", std::string subject = "");
    friend std::ostream& operator<<(std::ostream& stream, const Email& rhs);
};


#endif //LABB_4_EMAIL_H
