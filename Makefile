obj-m += hello.o

all:
  make -C /lib/modules/$(shell uname -r)/build M=$ modules
  
clean:
  make -C /lib/modules/$(shell uname -r)/build M=$ clean
