/*
Name: Usman Zaheer
Class: CIS 2500
Driver function
*/

#include "header.h"  

int main(int argc, char *argv[]) {
    int userInp = 0; 

    struct microtweet* tweetList = (struct microtweet*) malloc(sizeof(struct microtweet));
    tweetList->next = NULL;

    while(userInp != 8) {
        printf("Choose a menu option\n");
        scanf("%d", &userInp);

        if(userInp == 1) {
            tweetList = createTweet(tweetList);
        }

        else if(userInp == 2) {
            displayTweets(tweetList);
        }

        else if(userInp == 3) {
            searchTweetsByKeyword(tweetList);
        }

        else if(userInp == 4) {
            countStopWords(tweetList);
        }

        else if(userInp == 5) {
            deleteTweet(&tweetList);
        }

        else if(userInp == 6) {
            saveTweetsToFile(tweetList);
        }
    }
}

//declare start of list(head) then starting up menu to allow user to pick from options
