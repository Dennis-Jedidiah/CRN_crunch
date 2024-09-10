crunch: main.cpp
	g++ main.cpp CourseObject.cpp -o crunch.exe

clean:
	rm crunch.exe