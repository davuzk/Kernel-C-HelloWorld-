#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

static int __init hey(void)
{
	printk(KERN_INFO "Welcome to Kernel mode.\n");
	
	return 0;
}

static void __exit quit(void)
{

	printk(KERN_INFO "Goodbye.\n");

}

module_init(hey);
module_exit(quit);
