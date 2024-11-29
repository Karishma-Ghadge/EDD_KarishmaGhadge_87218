#include<linux/kernel.h>
#include<linux/module.h>

static int __init desd_init(void)
{
    printk(KERN_INFO "This is the init split module having 2 files..\n");
    return 0;
}

module_init(desd_init);

MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Split Module");
MODULE_AUTHOR("Karishma Ghadge");