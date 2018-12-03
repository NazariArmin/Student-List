//
// Created by armin on 11/29/18.
//

#ifndef STUDENT_LIST_STUDENT_H
#define STUDENT_LIST_STUDENT_H

#include <iostream>
class Student {
private:
    std::string firstName_;
    std::string lastName_;
    std::string id_;
public:
    Student(std::string firstName, std::string lastName, std::string id);
    ~Student();

    std::string firstName()const;
    std::string lastName()const;
    std::string id()const;

    void print();
//    Student &operator ==(Student const& second);
};


#endif //STUDENT_LIST_STUDENT_H
