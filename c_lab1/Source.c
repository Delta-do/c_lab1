#include <stdio.h>
#include <locale.h>

void name()
{
	puts("** ------------------------------------------------------------------------------------------ **");
	puts("**            ��������� � ���������� ����������� ���������� � ����� ���������� MVS 2022       **");
	puts("** ����-223                                                                                   **");
	puts("** ���������� �����                                                                           **");
	puts("** ------------------------------------------------------------------------------------------ **");
}

void date()
{
	puts("  _  __      _     _      ");
	puts(" | |   |  | | |   | | | | ");
	puts(" | |  /   | | |   | |  -|    ");
	puts("  -   | . |  -  .  -    |  .  ");
}

void main()
{
	//1 �������
	puts("Hello, world!");

	setlocale(LC_ALL, "RUS");
	puts("��� ���������");

	//2 �������
	puts("\n 2 �������");
	puts("** ------------------------------------------------------------------------------------------ **");
	puts("**            ��������� � ���������� ����������� ���������� � ����� ���������� MVS 2022       **");
	puts("** ����-223                                                                                   **");
	puts("** ���������� �����                                                                           **");
	puts("** ------------------------------------------------------------------------------------------ **");

	//3 �������
	puts("\n 3 �������");
	puts("  _  __      _     _      ");
	puts(" | |   |  | | |   | | | | ");
	puts(" | |  /   | | |   | |  -|    ");
	puts("  -   | . |  -  .  -    |  .  ");

	//4 �������
	puts("\n 4 �������");
	name();
	date();

	//5 �������
	puts("\n 5 �������");
	puts("             |\\            ");
	puts("             | \\       ");
	puts("             |  \\        ");
	puts("             |----            ");
	puts("             |           ");
	puts("             |             ");
	puts("   _______________________         ");
	puts("  \\                      /  ");
	puts("   \\                    /");
	puts("     -------------------        ");



}