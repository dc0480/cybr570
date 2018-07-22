#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

int init_module(void)
{
        printk(KERN_INFO "Wuz UP Planet! \n");

        return 0;
}

void cleanup_module(void)
{
    printk(KERN_INFO "Later Bitches \n");
}

module_init(simple_init);
module_exit(simple_exit);

MODULE_LICENSE("Educational_Opensource");
MODULE_DESCRIPTION("First Linux Kernal File");
MODULE_AUTHOR("DAN CANNING");