//
// Created by armin on 11/29/18.
//

#ifndef STUDENT_LIST_LIST_H
#define STUDENT_LIST_LIST_H
#include <iostream>
#include "Node.h"

template <class Type>
class List {

private:
    Node<Type> *head_;
    int size;

public:
//    Node* head()const;
    List();
    ~List();
    void push(Type const& data);
//    bool get(Type const& key)const;
    Type pop_back();

};

template <class Type>
List<Type>::List()
{
    size = 0;
    head_ = NULL;
}

template <class Type>
List<Type>::~List()
{
    Node<Type>* counter = head_;
    while (size >= 0)
    {
        Node<Type>* p = counter;
        counter = counter->link();
        delete p;
        size--;
    }
}

template <class Type>
void List<Type>::push(Type const& data)
{
    Node<Type>* newNode = new Node<Type>(data);
    if(head_ == NULL)
    {
        head_ = newNode;
        head_->link(head_);
        return;
    }
    Node<Type>* p = head_;
        while(p->link() != head_)
        {
            p = p->link();
        }
    p->link(newNode) ;
    newNode->link(head_);
    size++;
}

template <class Type>
Type List<Type>::pop_back()
{
    Node<Type> *past = head_;
    Node<Type> *current = past;
    while (current->link() != head_)
    {
        std::cout<<"ok \n";
        past = current;
        current = current->link();
    }
    Type data = current->data();
    past->link(head_);
    delete current;
    size--;
    return data;
}
#endif //STUDENT_LIST_LIST_H
