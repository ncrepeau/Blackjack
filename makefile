final.exe: main.o Card2.o Deck2.o
	g++ main.o Card2.o Deck2.o -o final.exe

main.o: main.cpp Card2.h Deck2.h
	g++ -Wall -c main.cpp

Card2.o: Card2.cpp Card2.h 
	g++ -Wall -c Card2.cpp

Deck2.o: Deck2.cpp Deck2.h Card2.h
	g++ -Wall -c Deck2.cpp 

clean:
	rm *.o final.exe
	