#include<linux/module.h>
#include<linux/init.h>

MODULE_LICENSE("GPL"); //meta data
MODULE_AUTHOR("USER");
MODULE_DESCRIPTION("Hello world");

static int __init ModuleInit(void) { //this function, loads first.
        printk("Hello world\n");
        return 0; //return value to trace error
}

static void __exit ModuleExit(void) { //this function, loads when module is destroyed
        printk("Bye \n");
}

module_init(ModuleInit);
module_exit(ModuleExit);
