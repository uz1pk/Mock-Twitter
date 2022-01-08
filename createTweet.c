/*
Name: Usman Zaheer
Class: CIS 2500
Create tweet
*/

#include "header.h"

tweet * createTweet( tweet * tweetList) {
    char userStr[51];
    char userStrTwo[141];
    int userID = 0;
    struct microtweet* head = tweetList;
    struct microtweet* node = (struct microtweet*) malloc(sizeof(struct microtweet));

    while(head != NULL) {
        head = head->next;
    }

    if(head == NULL) {

        printf("Enter a username: ");
        scanf("%s", userStr);
        printf("\n");
        printf("Enter the user's tweet: ");
        scanf("%s", userStrTwo);
        printf("\n");

        strcpy(node->user, userStr);
        strcpy(node->text, userStrTwo);

        for(int i = 0; i < strlen(userStr); ++i) {
            userID = userStr[i] + userID;
        }
        userID = userID + strlen(userStr);
    }

    head = tweetList;
    while(head != NULL) {
        if(head->id == userID) {
            srand(time(0));
            userID = userID + (rand() % (999)) + 1;
        }
        head = head->next;
    }

    node->id = userID;
    printf("Your computer generated userid is %d\n", userID);
    addNodeToList(&tweetList, node);
    free(head);

    return tweetList;
}

/*
First it gets to the latest spot in the linked list (end of list)
then prompts user for username and tweet text and stored them to the newest node that hasnt been added to the list but just created to store.
It then calculates user id and if a similar ID is found throughout the linked list it will add a random number from 1-999 to randomize it using rand()
After storing all this it calls the addNodeToList() function to officially add the node onto the list.
then returns the final list.
*/
