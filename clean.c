#include"headers.h"
static void __exit clean(void)
{
	printk(KERN_INFO "Bye kernel\n");
	


}

module_exit(clean);
