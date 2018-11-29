//
// Created by armin on 11/29/18.
//

#include "List.h"
#include <iostream>
template <class Type>
List<Type>::List()
{
    head_ = new Node<Type>();
    head_->data() = 0;
    head_->link() = nullptr;
}

template <class Type>
List<Type>::~List()
{
    delete head_;
}