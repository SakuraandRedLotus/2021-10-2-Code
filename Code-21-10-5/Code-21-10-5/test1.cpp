#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
 

int main()
{
	int  a = 0;
	a = 1;

	printf("%f\n",a);
	return 0;

}

#include<stdio.h>
#include<math.h>
int main()
{
    int weight = 0;
    int hight = 0;
    double BMI = 0.0;
    scanf_s("%d %d", &weight, &hight);
    BMI = weight / pow(hight / 100.0, 2);
    printf("%.2f", BMI);
    return 0;
}

#include<stdio.h>
#include<math.h>
int main()
{
    double a = 0.0;
    double b = 0.0;
    double c = 0.0;
    scanf("%lf %lf %lf", &a, &b, &c);
    double circumference = 0.0;
    circumference = a + b + c;
    printf("circumference=%.2lf", circumference);
    double area = 0.0;
    double s = circumference / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf(" ");
    printf("area=%.2lf", area);
}

#include<stdio.h>
int main()
{
	double c = 0;
	scanf("%lf", &c);
	int b = c / 2;
	return 0;
}

#include<stdio.h>
#include<math.h>
int main()
{
    double pi = 3.1415926;
    double r = 0;
    scanf("%lf", &r);
    double V = (4 / 3) * (pi * pow(r, 3));
    printf("%lf", V);
    return 0;
}
#include<math.h>
#include<stdio.h>
int main()
{
	int a = 2;
	int b = pow(a, 5);
	printf("%d",b );
	return 0;
}
#include<stdio.h>
int main()
{
	int a[]={0}
	int a = 1452 % 10000;
	printf("%d", a);
	return 0;
}

#include<stdio.h>
int main()
{
    int i = 0;
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int e = 0;
    int f = 0;
    int Lily_Number = 0;
    for (i = 10000; i < 99999;i++)
    {
        a = i / 1000;//1
        b = i % 1000;//461
        c = i % 100;//61
        d = i % 10;//1
        e = i / 100;//14
        f = i / 10;//146
        Lily_Number = a * b + e * c + f * d;
        if (Lily_Number == i)
        {
            printf("%d ", Lily_Number);
        }
    }
    return 0;
}

#include<stdio.h>
int main()
{
    int i = 0;
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int e = 0;
    int f = 0;
    int g = 0;
    int h = 0;
    int j = 0;
    int Lily_Number = 0;
    for (i = 10000; i < 99999; i++)
    {
        a = i / 10000;//8
        b = i / 1000;//82
        c = i / 100;//829
        d = i / 10;//8291
        e = i % 10000;//2910
        f = i % 1000;//910
        g = i % 100;//10
        h = i % 10;//1
        Lily_Number = a * e + b * f + c * g + d * h;
        if (Lily_Number == i)
        {
            printf("%d ", Lily_Number);
        }

    }
    return 0;
}

#include<stdio.h>
int main()

{
	int i = 0;
	for (i = 10000; i <=99999; i++)
	{
		int j = 0;
		int sum = 0;
		for (j = 10; j <=10000; j *= 10)
		{
			int a = i / j;
			int b = i % j;
			sum +=  a*b ;
		}
		if (sum == i)
			printf("%d ", i);
	}
	return 0;
}
