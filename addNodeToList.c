/*
Name: Usman Zaheer
Class: CIS 2500
Adding a node to linked list
*/

#include "header.h"

void addNodeToList(tweet**tweetList, tweet * node) {

    if(tweetList == NULL) {
        return;
    }

    if(*tweetList == NULL) {
        *tweetList = node;
        return;
    }

    tweet * head = *tweetList;

    while(head->next != NULL) {
        head = head->next;
    }
    head->next = node; 
}

/*
In this function it first checks if tweetlist exists/intialized, in that case it returns/ends function.
Then checks if there is a node in the list and if not adds the node.
Otherwhile it will loop trhough and simply add to the end of tweetList.
*/
