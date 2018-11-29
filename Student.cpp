//
// Created by armin on 11/29/18.
//

#include "Student.h"
Student::Student():
firstName_("Empty"),
lastName_("Empty"),
id_("Empty")
{}

Student::~Student()
{}

std::string Student::fristName() const
{
    return firstName_;
}

std::string Student::lastName() const {
    return lastName_;
}

std::string Student::id() const {
    return id_;
}

void Student::firstName(std::string const &firstName)
{
    this->firstName_ = firstName;
}

void Student::lastName(std::string const &lastName)
{
    this->lastName_ = lastName;
}

void Student::id(std::string const &id)
{
    this->id_ = id;
}

