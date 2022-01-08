Output: addNodeToList.o countStopWords.o createTweet.o deleteTweet.o displayTweets.o saveToFile.o searchKeyword.o main.o
	gcc -Wall -std=c99 addNodeToList.o countStopWords.o createTweet.o deleteTweet.o displayTweets.o saveToFile.o searchKeyword.o main.o -o Output

main.o: main.c heade.h
	gcc -Wall -std=c99 main.c

addNodeToList.o: addNodeToList.c header.h
	gcc -Wall -std=c99 -c addNodeToList.c

countStopWords.o: countStopWords.c header.h
	gcc -Wall -std=c99 -c countStopWords.c

createTweet.o: createTweet.c header.h
	gcc -Wall -std=c99 -c createTweet.c

deleteTweet.o: deleteTweet.c header.h
	gcc -Wall -std=c99 -c deleteTweet.c

displayTweets.o: displayTweets.c header.h
	gcc -Wall -std=c99 -c displayTweets.c

saveToFile.o: saveToFile.c header.h
	gcc -Wall -std=c99 -c saveToFile.c

searchKeyword.o: searchKeyword.c
	gcc -Wall -std=c99 -c searchKeyword.c

clean:
	rm *.o Output
