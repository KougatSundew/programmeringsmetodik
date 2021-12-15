// Labb 4, programmeringsmetodik
// Joel Olofsson (jool1904)
// Email.cpp, 2021-12-07 - 2021-12-13
// The main function and other functions


//
// Created by jolof on 2021-12-07.
//

#include "Email.h"
/**
 * Constructor
 * @param who - author of the mail with type string
 * @param date - date of type string
 * @param subject - subject of type string
 */
Email::Email(std::string who, std::string date, std::string subject):who(who), date(date), subject(subject) {}
/**
 * Operator overload on << for class Email
 * @param stream - out stream
 * @param rhs - right hand side value of type const Email&
 * @return - returns out stream
 */
std::ostream& operator<<(std::ostream& stream, const Email& rhs) {
    stream << "Subject: " << rhs.subject << "\n"
           << "From: " << rhs.who << "\n"
           << "Date: " << rhs.date << "\n\n";
    return stream;
}
