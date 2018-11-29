//
// Created by armin on 11/29/18.
//

#ifndef STUDENT_LIST_NODE_H
#define STUDENT_LIST_NODE_H

template <class Type>
class Node{
private:
    Type data_;
    Node<Type>* link_;
public:
//    int data()const ;
    Node();
    ~Node();
    Type & data();
    Node* & link();
//    void link(Node* const& Node);

};


#endif //STUDENT_LIST_NODE_H
