/*
Name: Usman Zaheer
Class: CIS 2500
Display all tweets
*/

#include "header.h"

void displayTweets(tweet * tweetList) {
    struct microtweet* head = tweetList;
    while(head != NULL) {
        printf("%d: Created by %s: %s\n", head->id, head->user, head->text);
        head = head->next;
    }
}

//Simply loops through the list and prints all the tweet info
