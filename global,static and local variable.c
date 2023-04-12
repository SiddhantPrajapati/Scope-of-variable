//WAP using global variable, static variable and local variable
#include<stdio.h>
#include<conio.h>
int c;     //globle variable
int runner()
{
    static int count=0;
    count++;
    return count;
}
int main()
{
    int a;  //local variable
    printf("output of count variable=%d",runner());
    a=runner();
    a=c+a;
    printf("\n output of local variable %d",a);
    return 0;
}
