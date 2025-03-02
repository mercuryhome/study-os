all: helloworld_syscall helloworld_unistd

helloworld_syscall: helloworld_syscall.c
	gcc -o helloworld_syscall helloworld_syscall.c

helloworld_unistd: helloworld_unistd.c
	gcc -o helloworld_unistd helloworld_unistd.c

.PHONY: clean
clean:
	rm -rf helloworld_syscall helloworld_unistd

