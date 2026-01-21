#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/module.h>


static int __init hello_world_init(void)
{
	printk(KERN_DEBUG "hello i am the module init debug message\n");
	printk(KERN_INFO "hello i am the module init info message\n");

	return 0;
}


static void __exit hello_world_exit(void)
{
	printk(KERN_DEBUG "hello i am the module exit debug message\n");
	printk(KERN_INFO "hello i am the module exit info message\n");

}


module_init(hello_world_init);
module_exit(hello_world_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Alf");
MODULE_DESCRIPTION("First driver for Pi");
MODULE_VERSION("1.0");
