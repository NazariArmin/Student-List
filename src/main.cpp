#include "List.h"
#include "Student.h"
int main() {
    Student st("armin", "nazari", "4311301197");
    Student st2("ehsan", "nazari" , "123");
    Student st3("amin", "nazari" , "563");
    List<Student> list;
    list.push(st);
    list.push(st2);
    list.push(st3);
    list.pop_back().print();
    list.pop_back().print();
    return 0;
}