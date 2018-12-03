//
// Created by armin on 11/29/18.
//

#include "Student.h"

Student::Student(std::string firstName, std::string lastName, std::string id):
firstName_(firstName),
lastName_(lastName),
id_(id)
{}

Student::~Student()
{
}

std::string Student::firstName() const
{
    return firstName_;
}

std::string Student::lastName() const {
    return lastName_;
}

std::string Student::id() const {
    return id_;
}


void Student::print()
{
    std::cout << "full name : "<< this->firstName_ + " " + this->lastName_<<std::endl;
    std::cout << "student id : " << this->id_;
    std::cout << "\n\n\n";
}
