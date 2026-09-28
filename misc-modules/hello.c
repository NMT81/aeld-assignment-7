/*                                                     
 * $Id: hello.c,v 1.5 2004/10/26 03:32:21 corbet Exp $ 
 */                                                    
#include <linux/init.h>
#include <linux/module.h>
MODULE_LICENSE("Dual BSD/GPL");
#define YOUR_GITHUB_USER_NAME	"NMT81"
static int hello_init(void)
{
	printk(KERN_ALERT "Hello, world from %s\n", YOUR_GITHUB_USER_NAME);
	return 0;
}

static void hello_exit(void)
{
	printk(KERN_ALERT "%s Goodbye, cruel world\n", YOUR_GITHUB_USER_NAME);
}

module_init(hello_init);
module_exit(hello_exit);
