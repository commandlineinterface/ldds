#include <linux/module.h>
#include <linux/init.h>

/* Meta Information */
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Tom");
MODULE_DESCRIPTION("Hello World LKM");

// This function is called when the module is loaded into the kernel
static int __init ModuleInit() {
    printk("Hello, I'm LKM!\n");
    return 0;
}

// This function is called when the module is removed from the kernel
static void __exit ModuleExit() {
    printk("Goodbye, Kernel\n");
}

module_init(ModuleInit);
module_exit(ModuleExit);
