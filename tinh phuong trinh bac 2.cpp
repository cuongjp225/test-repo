#include<stdio.h>
int main(){
	int a,b,c ;
	printf ("nhap gia tri lan luot a b c :");
	scanf ("%d%d%d",&a,&b,&c) ;
	int delta=b*b - 4*a*c;
	printf("=== HUONG DAN GIAI PHUONG TRINH BAC 2 ===\n");
    printf("Phuong trinh bac 2 co dang: ax^2 + bx + c = 0\n");
    printf("Buoc 1: Nhap cac he so a, b, c.\n");
    printf("Buoc 2: Tinh delta = b^2 - 4ac.\n");
    printf("delta vua tinh duoc co ket qua là :%d",delta);
    return 0;
}


