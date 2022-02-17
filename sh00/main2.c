#include <stdio.h>
#include <string.h>
int main() {

	int x,y,z,topla,cikar,carp,bol;
	char process[10];
	printf("Number 1: ");
	scanf("%d",&x);
	printf("Number 2: ");
	scanf("%d",&y);
	printf("Process: ");
	scanf("%s",&process);
	topla=x+y;
	cikar=x-y;
	carp=x*y;
	bol=x/y;

	if (strcmp(process, "topla")==0)
	{
		printf("Result: %d",topla);
	}
    else if (strcmp(process, "cikar")==0)
	{
		printf("Result: %d",cikar);
	}
	else if (strcmp(process, "carp")==0)
	{
		printf("Result: %d",carp);
	}
	else if (strcmp(process, "bol")==0)
	{
		printf("Result: %d",bol);
	}
	else
	{
		printf("Bad Command");
	}
	return 0;
}
