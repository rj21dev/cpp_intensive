#include <stdio.h>

int	g_var = 1;
int	foo(void) { return 2; };

namespace	first {
	
	int	g_var = 3;
	int	foo(void) { return 4; };
}

namespace	second {
	
	int	g_var = 5;
	int	foo(void) { return 6; };
}

namespace	third = second;

namespace	fourth {
	int	val = 42;
}

int	main(void)
{
	using namespace fourth;
	printf("g_var = %d, foo ret = %d\n", g_var, foo());
	printf("g_var = %d, foo ret = %d\n", first::g_var, first::foo());
	printf("g_var = %d, foo ret = %d\n", second::g_var, second::foo());
	printf("g_var = %d, foo ret = %d\n", third::g_var, third::foo());
	printf("g_var = %d, foo ret = %d\n", ::g_var, ::foo());
	printf("val = %d\n", val);
	return 0;
}
