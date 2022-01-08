/*
Name: Usman Zaheer
Class: CIS 2500
Search tweets by a keyword
*/

#include "header.h"

int searchTweetsByKeyword(tweet * tweetList) {
    char userStr[25];
    int count = 0;
    struct microtweet* head = tweetList;

    printf("Enter a keyword to search:\n");
    scanf("%s", userStr);
    while(head != NULL) {
        if(strstr(head->text, userStr) != NULL) {
            printf("Match found for '%s': %s wrote \"%s\"\n", userStr, tweetList->user, tweetList->text);
            count++;
            head = head->next;
        }
        else {
            head = head->next;
        }
    }
    if(count > 0) {
        return 1;
    }
    return 0;
}

/*
Loops through every tweets and checks if a given string is found and adds to count if the string is contained.
*/
