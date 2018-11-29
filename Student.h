//
// Created by armin on 11/29/18.
//

#ifndef STUDENT_LIST_STUDENT_H
#define STUDENT_LIST_STUDENT_H

#include <iostream>
class Student {
private:
    std::string firstName_, lastName_, id_;
public:
    Student();
    ~Student();

    std::string fristName()const;
    std::string lastName()const;
    std::string id()const;

    void firstName(std::string const& firstName);
    void lastName(std::string const& lastName);
    void id(std::string const & id);
};


#endif //STUDENT_LIST_STUDENT_H
