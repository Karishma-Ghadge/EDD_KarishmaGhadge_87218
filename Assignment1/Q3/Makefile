
obj-m = split.o
split-objs = hello_init.o hello_exit.o

split.ko: hello_init.c hello_exit.c
	make -C /lib/modules/$$(uname -r)/build M=$$(pwd) modules

clean:
	make -C /lib/modules/$$(uname -r)/build M=$$(pwd) clean

.PHONY: clean
