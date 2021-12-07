//
// Created by jolof on 2021-12-07.
//

#include "Email.h"
Email::Email(std::string who, std::string date, std::string subject):who(who), date(date), subject(subject) {}

std::ostream &operator<<(std::ostream &stream, const Email &rhs) {
    stream << rhs.who << "\t" << rhs.date << "\t" << rhs.subject;
    return stream;
}
