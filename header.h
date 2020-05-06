#ifndef HEADER_H
#define HEADER_H

typedef struct node {
    int data;
    node* next;
}* nodePtr;

// typedef struct node* nodePtr; //same as struct node*
//node* head;

nodePtr head;
nodePtr curr;
nodePtr temp;

class Link{
private: //only available to funct

public: // funct
Link();
void addNode(int addData);
void DelNode(int delData);
void PrintNodes();
};
#endif