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
    Student(std::string firstName = "Empty", std::string lastName = "Empty", std::string id = "Empty");
    ~Student();

    std::string firstName()const;
    std::string lastName()const;
    std::string id()const;

    void firstName(std::string const& firstName);
    void lastName(std::string const& lastName);
    void id(std::string const & id);

    void print();
//    Student &operator ==(Student const& second);
};


#endif //STUDENT_LIST_STUDENT_H
