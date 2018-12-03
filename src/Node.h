//
// Created by armin on 12/2/18.
//

#ifndef STUDENT_LIST_NODE_H
#define STUDENT_LIST_NODE_H

#include <iostream>
template <class Type>
class Node
{
public:
    Node(Type data);

    ~Node();
    void link(Node * const link);
    void data(Type const& data);

    Node* link()const;
    Type data()const;

private:
    Type data_;
    Node<Type>* link_;
};
template <class Type>
Node<Type>::Node(Type data):
        data_(data),
        link_(NULL)
{}
template <class Type>
Node<Type>::~Node()
{}
template <class Type>
void Node<Type>::link(Node *const link)
{
    link_ = link;
}
template <class Type>
Node<Type>* Node<Type>::link() const
{
    return link_;
}
template <class Type>
void Node<Type>::data(Type const& data)
{
    data_ = data;
}
template <class Type>
Type Node<Type>::data() const
{
    return data_;
}


#endif //STUDENT_LIST_NODE_H
