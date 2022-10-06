#include <core/core.h>

int main()
{
	struct core *core = CGE_Core_init("hello", 800, 600);
    
	CGE_Core_run(core);

	return 0;
}
