#include "helper.h"

int printString(char *str)
{
	int ret;
	ret = printf("%s\r\n",str);

	if(ret < 0)
	{
		return -1;
	}
	return 0;
}
