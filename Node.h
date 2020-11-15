//
// Created by Arman Sadeghi on 11/14/20.
//

#ifndef PROJECTPLAYLIST_NODE_H
#define PROJECTPLAYLIST_NODE_H
#include <iostream>
#include "Playlist.h"
using namespace std;

class Node{
    Node();
    Node(track);
    track current;
    Node* next;
    Node* previous;
};

Node::Node(){
    next = NULL;
    previous = NULL;
}

#endif //PROJECTPLAYLIST_NODE_H
