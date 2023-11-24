#include <stdio.h>
int Printf(int a,int b);
	Printf("\n %d * %d = %d", a , b ,a * b);
	if(a % b != 0) {
		printf("\n %d khong chia het cho %d", a, b);
    }else {
		printf("\n%d/%d=%d", a, b, a / b);
	}
int main(){
	int a,b,c;
	printf("Nhap so lan luot a, b, c: ");
	scanf("%d %d %d",&a, &b, &c);
	Printf(a,b); 
	Printf(b,c); 
	Printf(c,a);	
}

