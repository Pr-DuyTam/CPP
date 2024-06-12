/*
  Kiem Tra So Chinh Phuong Nho Hon N
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
/*
    So chính phuong là so mà ket qua khai can bac 2 là 1 so nguyên
    sqrt(4) = 2.00000 => ép v? nguyên = 2 => vì 2.000  == 2 (true) => là so chính phuong
    sqrt(5) = 2.23234 => ép v? nguyên = 2 => vì 2.4324 != 2 (false) => không là so chính phuong

    */
bool KiemTraChinhPhuong(int n)
{
    return sqrt(float(n)) == (int)sqrt((float)n);
}

void LietKeChinhPhuong(int n)
{
    for(int i = 2; i < n; i++)
    {
        if(KiemTraChinhPhuong(i) == true)
            printf("%4d", i);
    }
}
int main()
{
    int n;
    printf("\nNhap n: ");
    scanf("%d", &n);

    LietKeChinhPhuong(n);

    getch();
    return 0;
}
