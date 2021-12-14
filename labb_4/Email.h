// Labb 4, programmeringsmetodik
// Joel Olofsson (jool1904)
// Email.h, 2021-12-07 - 2021-12-13
// The main function and other functions


//
// Created by jolof on 2021-12-07.
//

#ifndef LABB_4_EMAIL_H
#define LABB_4_EMAIL_H

#include <string>
#include <iostream>

class Email {
    std::string who, date, subject;

    friend struct CompWhoDateSubject;
    friend struct CompDateWhoSubject;
    friend struct CompSubjectWhoDate;
public:
    Email() = delete;
    Email(std::string who = "", std::string date = "", std::string subject = "");
    friend std::ostream& operator<<(std::ostream& stream, const Email& rhs);
};

struct CompWhoDateSubject {
    bool operator()(const Email& lhs, const Email& rhs) {
        if(lhs.who != rhs.who)
            return lhs.who < rhs.who;
        if(lhs.date != rhs.date)
            return lhs.date < rhs.date;
        if(lhs.subject != rhs.subject)
            return lhs.subject < rhs.subject;
    }
};


struct CompDateWhoSubject {
    bool operator()(const Email& lhs, const Email& rhs) {
        if(lhs.date != rhs.date)
            return lhs.date < rhs.date;
        if(lhs.who != rhs.who)
            return lhs.who < rhs.who;
        if(lhs.subject != rhs.subject)
            return lhs.subject < rhs.subject;
    }
};

struct CompSubjectWhoDate {
    bool operator()(const Email& lhs, const Email& rhs) {
        if(lhs.subject != rhs.subject)
            return lhs.subject < rhs.subject;
        if(lhs.who != rhs.who)
            return lhs.who < rhs.who;
        if(lhs.date != rhs.date)
            return lhs.date < rhs.date;
    }
};

#endif //LABB_4_EMAIL_H
