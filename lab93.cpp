﻿// lab93.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	int N;
	cout << "Введите номер пособия: ";
	cin >> N;
	switch (N)
	{
	case 10: cout << "Десять ";
		break;
	case 11: cout << "Одиннадцать ";
		break;
	case 12: cout << "Двенадцать ";
		break;
	case 13: cout << "Тринадцать ";
		break;
	case 14: cout << "Четырнадцать ";
		break;
	case 15: cout << "Пятнадцать ";
		break;
	case 16: cout << "Шестнадцать ";
		break;
	case 17: cout << "Семнадцать ";
		break;
	case 18: cout << "Восемнадцать ";
		break;
	case 19: cout << "Девятнадцать ";
		break;
	case 20: cout << "Двадцать ";
		break;
	case 21: cout << "Двадцать одно ";
		break;
	case 22: cout << "Двадцать два ";
		break;
	case 23: cout << "Двадцать три ";
		break;
	case 24: cout << "Двадцать четыре ";
		break;
	case 25: cout << "Двадцать пять ";
		break;
	case 26: cout << "Двадцать шесть ";
		break;
	case 27: cout << "Двадцать семь ";
		break;
	case 28: cout << "Двадцать восемь ";
		break;
	case 29: cout << "Двадцать девять ";
		break;
	case 30: cout << "Тридцать ";
		break;
	case 31: cout << "Тридцать одно ";
		break;
	case 32: cout << "Тридцать два ";
		break;
	case 33: cout << "Тридцать три ";
		break;
	case 34: cout << "Тридцать четыре ";
		break;
	case 35: cout << "Тридцать пять ";
		break;
	case 36: cout << "Тридцать шесть ";
		break;
	case 37: cout << "Тридцать семь ";
		break;
	case 38: cout << "Тридцать восемь ";
		break;
	case 39: cout << "Тридцать девять ";
		break;
	case 40: cout << "Сорок ";
		break;
	default: cout << "Введено неверное значение...";
		break;
	}
	switch (N)
	{
	case 21:cout << "учебное задание.";
		break;
	case 31:cout << "учебное задание.";
		break;
	default:cout << "учебных заданий.";
		break;
	}
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
