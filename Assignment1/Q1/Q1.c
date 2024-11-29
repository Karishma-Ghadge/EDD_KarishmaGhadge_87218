#include<linux/module.h>
#include<linux/kernel.h>

static int __init simple_init(void)
{
    printk(KERN_INFO "Hello world..\n");
    return 0;
}

static void __exit simple_exit(void)
{
    printk(KERN_INFO "Exiting from module..\n");
}

module_init(simple_init);
module_exit(simple_exit);

MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Simple module");
MODULE_AUTHOR("Karishma Ghadge");