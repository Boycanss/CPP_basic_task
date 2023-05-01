#include <stdio.h>

const int xyz;
// declare the falue in above declaration. so it should be 
// const int xyz = 0;
// and then delete the xyz = 0; below

int main(int n, char** args)
{
	xyz = 0; // error because xyz is a constant integer. can't be modified;
	printf("%d", xyz);
}
