# Name of the loadable module
obj-m := tun_gpu.o

# If using multiple C files, link them into the single module
tun_gpu-y := tun_gpu_main.o #tun_gpu_devmem.o

# Add the include folder to the kernel compiler's search path
ccflags-y := -I$(src)/../include

KDIR ?= ../../linux/

all:
	$(MAKE) -C $(KDIR) M=$(PWD) modules

clean:
	$(MAKE) -C $(KDIR) M=$(PWD) clean