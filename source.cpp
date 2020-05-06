#include <iostream>
using namespace std;
#include "header.h"

// void Link::hello()
// {
//     cout << "hello world" << endl;
// }

Link::Link(){
    head = nullptr;
    curr = nullptr;
    temp = nullptr;
}//end constructor

void Link::addNode(int addData){
    nodePtr n = new node;
    n->next = nullptr;
    n->data = addData;

    if(head != nullptr){
        curr = head;
        while(curr->next != nullptr){
            curr = curr->next;
        }
        curr->next = n;
    }
    else{
        head = n;
    }
}//addNode

void Link::DelNode(int deldata){
    nodePtr delPtr = nullptr;
    temp = head;
    curr = head;
    while(curr != nullptr && curr->data != deldata){
        temp = curr;
        curr = curr->next;
    }
    if(curr == nullptr){
        cout << deldata << " Not found\n";
    }
    else{
        delPtr = curr;
        curr = curr->next;
        temp->next = curr;
        delete delPtr;
        cout << "Value " << deldata << " was deleted\n";
    }
}//end DelNode

void Link::PrintNodes(){
    curr = head;
    while(curr != nullptr){
        cout << curr->data << endl;
        curr = curr->next;
    }
}
