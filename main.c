//Tinh tong cac chu so duoc nhap vao, so nhap vao co kieu du lieu khac nhau (int, double)
#include<stdio.h>
#include<stdarg.h>
// Ham tinh tong
void Tong(int numinput,...) 
{
    double sum1 = 0;                    // Tong cac so kieu double
    int sum2 = 0;                       // Tong cac so kieu int
    va_list ptr1, ptr2;                 // Khoi tao 2 bien luu tru cac thong so bo sung
    va_start(ptr1, numinput);           // numiput: so phan tu can cong
    va_start(ptr2, numinput);
    for(int i = 0; i < numinput; i++)
    {
        float temp1 = va_arg(ptr1,double);      // bien luu gia tri phan tu co kieu double
        int temp2 = va_arg(ptr2,int);           // bien luu gia tri phan tu co kieu int
        if(temp1 != 0) sum1 += temp1;           // khi in cac gia tri int theo kieu so thuc, sau khi gan temp1, cac gia tri nay bang 0
        else if(temp1 == 0) sum2 +=temp2;       // Nen Khi temp1 = 0 thi vi tri do chua gia tri kieu int, ta tien hanh cong cac so int (sum2)
    }                                           // nguoc lai cong cac so kieu so thuc (sum1)
    va_end(ptr1);                               
    va_end(ptr2);
    printf("Tong cac chu so la: %.2f\n",sum1+sum2); // Tong bang tong cua sum1 va sum2
}
int main()
{
    Tong(7,1,2,4,5,3.2,5.6,5.6);                //Goi ham va nhap vao cac tham so
    return 0;
}

