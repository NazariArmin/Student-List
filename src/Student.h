//
// Created by armin on 11/29/18.
//

#ifndef STUDENT_LIST_STUDENT_H
#define STUDENT_LIST_STUDENT_H

#include <fstream>
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
    bool operator == (Student const& student);
    bool operator != (Student const& student);
    void print();
    void writeTo(std::ofstream & outFile);
};


#endif //STUDENT_LIST_STUDENT_H
