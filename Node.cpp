//
// Created by armin on 11/29/18.
//

#include "Node.h"
//int Node::data() const
//{
//    return data_;
//}
template <class Type>
Node<Type>::Node():
Type(data_),
link_(nullptr)
{
}
template <class Type>
Type & Node<Type>::data()
{
    return data_;
}
template <class Type>
Node<Type>* & Node<Type>:: link()
{
    return this->link_;
}
//void Node::link(Node *const &link)
//{
//    this->link_ = link;
//}