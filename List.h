//
// Created by armin on 11/29/18.
//

#ifndef STUDENT_LIST_LIST_H
#define STUDENT_LIST_LIST_H
#include <iostream>
template <class Type>
class List {
    class Node{
        Node():
        Type(data),
        link(NULL)
        {}
        Node(Type data, Node* link):
        data(data),
        link(link)
        {}
        ~Node(){
            delete link;
        }
        Type data;
        Node* link;
    };
private:
    Node* head_;

public:
//    Node* head()const;
    List();
    ~List();
    void push(Type const& data);
//    bool get(Type const& key)const;
    Type pop()const;
};


#endif //STUDENT_LIST_LIST_H
