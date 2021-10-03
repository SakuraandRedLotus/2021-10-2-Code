#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
 
 
int main()
{
	printf("     **     \n");
	printf("     **     \n");
	printf("************\n");
	printf("************\n");
	printf("    *  *    \n");
	printf("    *  *    \n");
	return 0;
}


#include<stdio.h>
int main()
{
	int a = 0xABCDEF;
	printf("%x", a);
	return 0;
 
 
}
#include<stdio.h>
int main()
{
	int a = 0xABCDEF;
	printf("%#x", a);
	return 0;
}

#include<stdio.h>
int main()
{
	int ret=printf("Hello world!");
	printf("%d",ret);

	return 0;
}

#include<stdio.h>
int main()
{
    int id = 0;
    float C_score = 0.00;
    float Math_score = 0.00;
    float Eng_score = 0.00;
    scanf("%d;%f,%f,%f", id, C_score, Math_score, Eng_score);
    printf("The each subject score of  No. %d is %.2f, %.2f, %.2f"
        , id, C_score, Math_score, Eng_score);
    return 0;
}
#include<stdio.h>
int main()
{
    int id = 0;
    float C_score = 0.00;
    float Math_score = 0.00;
    float Eng_score = 0.00;
    scanf("%d;%f,%f,%f", &id, &C_score, &Math_score, &Eng_score);
    printf("The each subject score of  No. %d is %.2f, %.2f, %.2f."
        , id, C_score, Math_score, Eng_score);
    return 0;
}


#include<stdio.h>
int main()
{
	int ch = 0;
	ch=getchar();
	printf("%d\n", ch);
       putchar(ch);
	return 0;
}


#include<stdio.h>
int main()
{
    int ch = 0;
    while ((ch = getchar()) != EOF)
    {
        if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
            printf("YES\n");
        else
            printf("NO\n");
        getchar();
    }
    return 0;
}