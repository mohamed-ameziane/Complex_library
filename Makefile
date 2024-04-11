main: *.cpp
	g++ -o main *.cpp

run: main
	./main

clean:
	rm -f main