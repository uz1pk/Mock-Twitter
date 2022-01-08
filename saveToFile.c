/*
Name: Usman Zaheer
Class: CIS 2500
Saves tweets to file given a file name
*/

#include "header.h"

void saveTweetsToFile(tweet * tweetList) {
    char filename[100];
    FILE *fptr;
    struct microtweet* head = tweetList;

    printf("Enter the filename where you would like to store your tweets (include the .csv ext): ");
    scanf("%s", filename);
    printf("\n");

    fptr = fopen(filename, "w");
    fprintf(fptr, "User_id,Username,Tweet_text\n");
    while(head != NULL) {
        fprintf(fptr, "%d,%s,%s\n", head->id, head->user, head->text);
        head = head->next;
    }
    fclose(fptr);
    printf("Output Successful!");
}

/*
prompts user for filename and stores it.
opens a file with that name and writes all data to it in csv.
this closes the file stream and prints output successful/
*/
