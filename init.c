#include"headers.h"

static int __init initfunc(void)
{
	printk(KERN_INFO "Hello kernel\n");
	return 0;


}

module_init(initfunc);
