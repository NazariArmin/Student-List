//
// Created by armin on 12/13/18.
//

#ifndef STUDENT_LIST_STUDENTLIST_H
#define STUDENT_LIST_STUDENTLIST_H

#include "List.h"
#include "Student.h"
#include <vector>
class StudentList : public List<Student>
{
public:
    //for every member of list call student::print
    void showList();
    void showTop();
    std::vector<Student> searchStudents(Student const& Student);
    //for every member of list call student::writeTo function
    void writeTo(std::ofstream & outFile);
private:
    //if any of data of these student is same return true
    bool isThere(Student const& keyStudent, Student const& listStudent);
};


#endif //STUDENT_LIST_STUDENTLIST_H
