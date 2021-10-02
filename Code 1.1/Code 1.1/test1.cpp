#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	printf("Practice makes perfect!");
	return 0;
}
 
 
#include<stdio.h>
int main()
{
    printf("v  v\n");
    printf(" vv \n");
    printf(" v \n");
    return 0;
}

#include<stdio.h>
int main()
{
    printf("The size of short is %d bytes.\n",sizeof(short));
    printf("The size of int is %d bytes.\n",sizeof(int));
    printf("The size of long is %d bytes.\n",sizeof(short));
    printf("The size of long long is %d bytes.\n",sizeof(long long));
    return 0;
}

#include<stdio.h>
int main()
{
    printf("The size of short is %d bytes.\n", sizeof(short));
    printf("The size of int is %d bytes.\n", sizeof(int));
    printf("The size of long is %d bytes.\n", sizeof(long));
    printf("The size of long long is %d bytes.\n", sizeof(long long));
    return 0;

}


#include<stdio.h>
int main()
{
	printf("0%o 0x%x\n", 1234, 1234);
	return 0;
}


#include<stdio.h>
int main()
{
	printf("%#o %#X\n", 1234, 1234);
	return 0;
}


#include<stdio.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	while (n)
	{
		printf("%d", n % 10);
		n=n / 10;
	}
	return 0;
}

#include<stdio.h>
int main()
{
	int ch = 0;
	while ((ch = getchar())!=EOF)
	{
		putchar(ch+32);
		printf("\n");
		getchar();
	}
	return 0;
}
