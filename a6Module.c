#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/sysctl.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Alex Markules");
MODULE_DESCRIPTION("A6 module");
MODULE_VERSION("0.01");

static int __init lkm_example_init(void) {
 printk(KERN_INFO "Alex Markules Module");
panic("my panic");
 return 0;
}

static void __exit lkm_example_exit(void) {
 printk(KERN_INFO "Unloading a6 module");
}

module_init(lkm_example_init);
module_exit(lkm_example_exit);
