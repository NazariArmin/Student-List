//
// Created by armin on 11/29/18.
//

#include "List.h"
#include <iostream>
template <class Type>
List<Type>::List()
{
    head_ = new Node();
    head_->link = head_;
}

template <class Type>
List<Type>::~List()
{
    delete head_;
}

template <class Type>
void List<Type>::push(Type const& data)
{
    Node* newNode = new Node();
    newNode->data = data;
    newNode->link = head_;
    Node* p = head_;
    while(p->link != head_)
    {
        p = p->link;
    }
    p->link = newNode;

}

template <class Type>
Type List<Type>::pop() const
{
    Node* p = head_;
    while(p->link != head_)
        p = p->link;
    return p->data;
}
//template <class Type>
//bool List<Type>::get(const Type& key) const
//{
//    Node* p = head_;
//    while(p->data != key && p->link != head_)
//    {
//        p = p->link;
//    }
//    return p->data == key ? true : false;
//
//}