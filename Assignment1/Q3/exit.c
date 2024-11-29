#include<linux/kernel.h>
#include<linux/module.h>

static void __exit desd_exit(void)
{
    printk(KERN_INFO "Exiting from the module having 2 files..\n");
}

module_exit(desd_exit);