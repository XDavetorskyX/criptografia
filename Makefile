build: criptograma.o main.o
	$(CXX) criptograma.o main.o -w -o programa

criptograma.o: criptograma.cpp
	$(CXX) -c criptograma.cpp -o criptograma.o

main.o: main.cpp
	$(CXX) -c main.cpp -o main.o

clean:
	rm *.o

.PHONY: build clean
