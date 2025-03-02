
all: cpu mem threads io

clean:
	rm -f cpu mem threads io

cpu: cpu.c common.h
	gcc -g -o cpu cpu.c -Wall

mem: mem.c common.h
	gcc -g -o mem mem.c -Wall

threads: threads.c common.h common_threads.h
	gcc -g -o threads threads.c -Wall -pthread

io: io.c common.h
	gcc -g -o io io.c -Wall

