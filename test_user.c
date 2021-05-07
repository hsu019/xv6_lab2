#include "types.h"
#include "user.h"

int main( int argc, char * argv[])
{
	printf(1, "\n\n Hello from the user space! \n ");

	//waits(0);
	setpriority(30);
	setpriority(10);	
	exit();
	return 0;
}
