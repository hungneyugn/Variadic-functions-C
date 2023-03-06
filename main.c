#include<stdio.h>
#include<stdarg.h>
void Tong(int numinput,...)
{
    double sum1 = 0; 
    int sum2 = 0;
    va_list ptr1, ptr2;
    va_start(ptr1, numinput);
    va_start(ptr2, numinput);
    for(int i = 0; i < numinput; i++)
    {
        float temp1 = va_arg(ptr1,double);
        int temp2 = va_arg(ptr2,int);
        if(temp1 != 0) sum1 += temp1;
        else if(temp1 == 0) sum2 +=temp2;
    }
    va_end(ptr1);
    va_end(ptr2);
    printf("Tong cac chu so la: %.2f\n",sum1+sum2);
}
int main()
{
    Tong(7,1,2,4,5,3.2,5.6,5.6);
    return 0;
}

