# hello-world
101: Writing Linux kernel module(Hello world)

```
make

sudo insmod hello_mod.ko
lsmod | grep hello_world
sudo dmesg | tail -n 5
sudo rmmod hello_mod
sudo dmesg | tail -n 5
```
