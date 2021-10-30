vec_test: main.o Vec3f.o
	gcc -o vec_test main.o Vec3f.o

main.o: main.c
	gcc -c main.c

vec3f.o: Vec3f.c Vec3f.h
	gcc -c Vec3f.o

clean:
	rm -f main.o Vec3f.o vec_test

.PHONY: clean
