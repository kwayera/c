#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/* ������ ������ main */
/* ����� ����� 7 �� 3 */
/*	������� - int k1=5;
	long long k2=3LL;
	double k3=.4;
	float k4=4.f;   */

int main(int argc, char *argv[]) {
	unsigned long int n1;
	long n2;
	
	double a,b=7,c=2;
	a=b/c;
	
	unsigned int k1=-12; // unsigned int - �� ������� ��� ��� ����������� �����, ����� �������� ������ %u ��� printf, � ������ ������ ������ �������� unsigned int k1=-12;
	
	long long k2=3uLL; 
	double k3=.4;
	float k4=4.f; 

	printf("Text!\n"); // ����� ������ ���������� ����� �� �����
	// ����������� ������� - \t - ���������,tab; \n - ������� �� ������ ������� 
	printf("%g k1=%u %LLd %s",k3,k1,1234567893LL, "C++"); //�������� %d - ������������� �����, %u - ������������� �����, %s - ������, %g - ����� � ��������� ������
	// printf("k1=%u %LLd" - ������� ��� ��������,k1,1234567893LL - ������� ������ ����� ������);
	// ������ ���������� � %������ ���� ����������� ��� ���������. ������ ������� ������ ��������� � ����� ����������
	
	return 0;
}
