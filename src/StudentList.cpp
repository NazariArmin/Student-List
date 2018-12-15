//
// Created by armin on 12/13/18.
//

#include "StudentList.h"

void StudentList::showList()
{
  int number = 1;
  if(head_){
    std::cout << number << "   : "<<std::endl;
    head_->data().print();
    number++;
  }
  else{
    std::cout <<"             ---------->  there is no student in list  <----------"<<std::endl;
    return;
  }

  Node<Student> *point = head_->link();
  while(point != head_)
  {
    std::cout << number << "   : "<<std::endl;
    point->data().print();
    point = point->link();
    number++;
  }
}
void StudentList::showTop()
{
  if(head_)
  {
    back().print();
    return;
  }
  std::cout <<"             ---------->  there is no student in list  <----------"<<std::endl;
}
std::vector<Student> StudentList::searchStudents(Student const &keyStudent)
{
  std::vector<Student> students;
  if(head_)
  {
    if(isThere(keyStudent,head_->data()))
    {
      students.push_back(head_->data());
    }
  }
  else {
    return students;
  }
  Node<Student> *point = head_->link();
  while(point != head_)
  {
    if(isThere(keyStudent,point->data()))
    {
      students.push_back(point->data());
    }
    point = point->link();
  }


}
void StudentList::writeTo(std::ofstream &outFile)
{
  if(head_)
  {
    Node<Student> *p = head_;
    while (p->link() != head_) {
      p->data().writeTo(outFile);
      p = p->link();
    }
    p->data().writeTo(outFile);
    return;
  }
}

bool StudentList::isThere(Student const& keyStudent, Student const& listStudent)
{
  return (keyStudent.firstName() == listStudent.firstName()||keyStudent.firstName() == "0" )&&(keyStudent.lastName() == listStudent.lastName()||keyStudent.lastName() == "0")&&(keyStudent.id() == listStudent.id()||keyStudent.id() == "0");
}