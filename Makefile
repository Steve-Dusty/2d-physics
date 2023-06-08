run:
	g++ -c main.cpp
	g++ main.o -o sfml-app -lsfml-graphics -lsfml-window -lsfml-system
	./sfml-app

clean:
	rm -rf ./sfml-app main.o