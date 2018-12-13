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
    void showList();
    void showTop();
    std::vector<Student> searchStudents(Student const& Student);
private:
    bool isThere(Student const& keyStudent, Student const& listStudent);
};


#endif //STUDENT_LIST_STUDENTLIST_H
