#include<stdio.h>

int main()
{
    char ch = 0;
    ch = getchar();
    int i = 0;
    for (i = 0; i < 5; i++)
    {
        int j= 0;
        for (j=0; j<4-i; j++)
        {
            printf(" ");
        }
        for (j =0 ; j<i+1; j++)
        {
            printf("%c ",ch);
        }
        printf("\n");

    }
    return 0;
}

#include<stdio.h>
int main()
{
    printf("%c,%c,%c,%c,%c,%c,%c,%c,%c,%c,%c,%c"
        ,73,32,99,97,110,32,100,111,32,105,116,33);
    return 0;
}


#include<stdio.h>
int main()
{
	char arr[] = { 73,32,99,97,110,32,100,111,32,105,116,33 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		printf("%c", arr[i]);
		
	}
	return 0;
}


#include<stdio.h>
int main()
{
    int year = 0;
    int month = 0;
    int date = 0;
    scanf_s("%d%d%d", &year, &month, &date);
    printf("year=%4d\nmonth=%2d\ndate=%2d\n", year, month, date);
    return 0;
}

#include<stdio.h>
int main()
{
    int year = 0;
    int month = 0;
    int date = 0;
    scanf_s("%4d%2d%2d", &year, &month, &date);
    printf("year=%02d\nmonth=%02d\ndate=%02d\n", year, month, date);
    return 0;
}


#include<stdio.h>
int main()
{
    int n = 0;
    while (scanf("%d", &n) != EOF)
    {
        printf("%d", 1 << n);
        printf("\n");
    }
    return 0;
}

#include<stdio.h>
int main()
{
    int a = 0;
    int b = 0;
    scanf_s("%d%d", &a, &b);

    int tmp = a;
    a = b;
    b = tmp;
    printf("a=%d,b=%d", a, b);
    return 0;
}


#include<stdio.h>
int main()
{
    int a = 40
        int c = 212;
    printf("%d\n", (-8 + 22) * a - 10 + c / 2);
    return 0;
}


#include<stdio.h>
int main()
{
    int a = 0;
    int b = 0;
    scanf_s("%d %d", &a, &b);
    printf("%d %d", a / b, a % b);
    return 0;
}