#include <cstdint>
#include <initializer_list>
#include <stddef.h>

#pragma once
namespace lmp{

class Node{
  int content;
  Node* next;
  Node* prev;
  

  public:
    Node() {};
    Node(int input){content=input;};
    void setContent(int input);
    void setNext(Node* iNext);
    void setPrev(Node* iPrev);
    int getContent();
    Node* Next();
    Node* Prev();


};

class NodeList {
  
  Node* head;
  Node* tail;
  public:
    NodeList() {head=NULL; tail=NULL;};
    // Print this crap

    void Print();
    void PushBack(int data);
};
}
