#include <stdio.h>

int main ()
{
    float a, b;
    char oper;
    scanf ("%f %c %f", &a, &oper, &b); //��������� ���������

	if (b == 0)
	printf ("error\n");           //��������� ������������� ���������
	else if ( oper == '+')        //����� � ����������� �� �����
		printf ("%.2f\n", a + b);
	else if ( oper == '-')
        printf ("%.2f\n", a - b);
	else if ( oper == '*')
        printf ("%.2f\n", a * b);
	else if ( oper == '/')
        printf ("%.2f\n", a / b);
        
	return 0;
}
