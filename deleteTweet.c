/*
Name: Usman Zaheer
Class: CIS 2500
Delete tweet
*/

#include "header.h"

void deleteTweet(tweet ** tweetList) {

    if(*tweetList == NULL) {
        return;
    }

    int tweetCount, userIndex;
    struct microtweet* head = *tweetList;
    
    while(head != NULL) {
        tweetCount++;
        head = head->next;
    }

    head = *tweetList;
    printf("Currently there are %d tweets.\n", tweetCount);
    printf("Which tweet do you wish to delete - enter a value between 1 and %d", tweetCount);
    scanf("%d", &userIndex);

    if(userIndex == 0) {
        *tweetList = head->next;
        free(head);
        return;
    }
    if(userIndex > tweetCount) {
        return;
    }
    for (int i = 0; head != NULL && i < userIndex - 1; ++i) {
        head = head->next; 
    }
    struct microtweet* temp = head->next->next;
    free(head->next);
    head->next = temp;
}
    
    /*
    First check if list exists
    Then counts up total number of tweets
    Prompts user for which tweet to remove and based on the users input will go ahead and unlink and free that node from the list
    */
