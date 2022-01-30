#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/* нельзя менять main */
/* сразу делем 7 на 3 */
/*	Образец - int k1=5;
	long long k2=3LL;
	double k3=.4;
	float k4=4.f;   */

int main(int argc, char *argv[]) {
	unsigned long int n1;
	long n2;
	
	double a,b=7,c=2;
	a=b/c;
	
	unsigned int k1=-12; // unsigned int - мы сказали что это беззнаковое число, нужно поменять формат %u для printf, в данном случае нельзя написать unsigned int k1=-12;
	
	long long k2=3uLL; 
	double k3=.4;
	float k4=4.f; 

	printf("Text!\n"); // можно просто напечатать текст на экран
	// управляющие символы - \t - табуляция,tab; \n - перенос на другую строчку 
	printf("%g k1=%u %LLd %s",k3,k1,1234567893LL, "C++"); //печатает %d - положительные числа, %u - отрицательное число, %s - строка, %g - число с плавающей точкой
	// printf("k1=%u %LLd" - говорим как печатать,k1,1234567893LL - говорим откуда брать данные);
	// формат начинается с %СИМВОЛ ТИПА СОКРАЩЕННЫЙ ТИП АРГУМЕНТА. Формат символа должен совпадать с типом переменной
	
	return 0;
}
