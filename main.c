#include "helper.h"

int main()
{
	int ret;
	ret = printString("Hello World!");
	if(ret < 0)
	{
		printf("Error in printing");
	}
	return 0;
}

