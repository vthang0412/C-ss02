#include <stdio.h>

int main() {
    int number = 9;
	int secondNumber  = 9;
	int Tong = number + secondNumber ;
	int Hieu = number - secondNumber ;
	int Nhan = number * secondNumber ;
	int Thuong = number / secondNumber ;
	printf ("Tong cua %d va %d la: %d\n",number,secondNumber,Tong);
	
	printf ("Hieu cua %d va %d la: %d\n",number,secondNumber,Hieu);
	printf ("Nhan cua %d va %d la: %d\n",number,secondNumber,Nhan);
	printf ("Thuong cua %d va %d la: %d\n",number,secondNumber,Thuong);
    return 0;
}
