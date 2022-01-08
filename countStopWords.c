/*
Name: Usman Zaheer
Class: CIS 2500
Counts and prints all stop words
*/

#include "header.h"

void countStopWords(tweet * tweetList) {
    int tweetCount = 0, stopWordCount = 0;
    struct microtweet* head = tweetList;
    char allStopWords[25][20] = {"a", "an", "and", "are", "as",
                                "at", "be", "by", "for", "from", "has",
                                "he", "in", "is", "it", "its", "of", "on",
                                "that", "the", "to", "was", "were", "will", "with"};
    while(head != NULL) {
        char *piece = strtok(head->text, " ");
        while(piece != NULL) {
            for(int i = 0; i < 25; ++i) {
                if(strstr(piece, allStopWords[i]) != NULL) {
                    stopWordCount++;
                }
            }
            piece = strtok(NULL, " ");
        }

        head = head->next;
        tweetCount++;
        free(piece);
    }
    tweetList = head;
    free(head);
    printf("Across %d tweets, %d stop words were found\n", tweetCount, stopWordCount);
}

/*
Declare temp node to hold list, and also I have a 2D array storing all stop words
Then it will go through each tweet, and in each tweet text it will break it up into words and comapre those words to the ones inthe array
From there it will free the temp piece varibale and the temp list and printout the total tweet count and stopWordCount
*/
