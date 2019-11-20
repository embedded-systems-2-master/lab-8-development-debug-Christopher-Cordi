/*
 * Placeholder PetaLinux user application.
 *
 * Replace this with your application code
 */
#include <stdio.h>

int main(int argc, char *argv[])
{
	char *welcome;
#ifdef WELCOME
	welcome=WELCOME;
#else
	welcome="Petalinux World!";
#endif
	printf("Hello, %s\n",welcome );
	printf("cmdline args:\n");
	while(argc--)
		printf("%s\n",*argv++);

	return 0;
}


