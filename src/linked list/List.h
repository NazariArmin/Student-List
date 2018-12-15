//
// Created by armin on 11/29/18.
//

#ifndef STUDENT_LIST_LIST_H
#define STUDENT_LIST_LIST_H
#include <iostream>
#include "Node.h"

template <class Type>
class List {

protected:
    Node<Type> *head_;
    int size_;
    bool isNotEmpty();

public:
//    Node* head()const;
    List();
    ~List();

    int size();
    void push(Type const& data);
    Type pop_back();
    Type back();
    void remove(Type key);

};

template <class Type>
List<Type>::List()
{
    size_ = 0;
    head_ = NULL;
}

template <class Type>
List<Type>::~List()
{
    Node<Type>* counter = head_;
    while (size_ > 0)
    {
        Node<Type>* p = counter;
        counter = counter->link();
        delete p;
      size_--;
    }
}
template <class Type>
int List<Type>::size()
{
  return size_;
}
template <class Type>
void List<Type>::push(Type const& data)
{
  Node<Type>* newNode = new Node<Type>(data);
  if(head_ == NULL)
  {
    head_ = newNode;
    head_->link(head_);
    size_++;
    return;
  }
  Node<Type>* p = head_;
  while(p->link() != head_)
  {
    p = p->link();
  }
  p->link(newNode) ;
  newNode->link(head_);
  size_++;
}
template <class Type>
Type List<Type>::pop_back()
{
  Node<Type> *past = head_;
  Node<Type> *current = past;
  while (current->link() != head_)
  {
    past = current;
    current = current->link();
  }
  Type data = current->data();
  past->link(head_);
  delete current;
  size_--;
  return data;
}
template <class Type>
Type List<Type>::back()
{
  Node<Type> *point = head_;
  while(point->link() != head_)
  {
    point = point->link();
  }
  Type data = point->data();
  return data;
}
template <class Type>
bool List<Type>::isNotEmpty(){
  return head_;
}
template <class Type>
void List<Type>::remove(Type key)
{
  Node<Type> *past = head_;
  Node<Type> *current = past->link();
  while (key != current->data())
  {
    past = current;
    current = current->link();
  }

  past->link(current->link());
  delete current;
  if(size_>1)
    head_ = past->link();
  else
    head_ = NULL;
  size_--;
}
#endif //STUDENT_LIST_LIST_H
