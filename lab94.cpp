// lab94.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	int N;
	div_t N1, N2, N3;
	cout << "Введите число от 100 до 999: ";
	cin >> N;
	N1 = div(N, 100);
	N2 = div(N1.rem, 10);
	switch (N1.quot)
	{
	case 1:cout << "Сто ";
		break;
	case 2:cout << "Двести ";
		break;
	case 3:cout << "Триста ";
		break;
	case 4:cout << "Четыреста ";
		break;
	case 5:cout << "Пятсот ";
		break;
	case 6:cout << "Шестьсот ";
		break;
	case 7:cout << "Семьсот ";
		break;
	case 8:cout << "Восемьсот ";
		break;
	case 9:cout << "Девятьсот ";
		break;
	default: cout << "Введите трехзначное число";
		break;
	}
	switch (N1.rem)
	{
	case 1: cout << "один.";
		break;
	case 2: cout << "два.";
		break;
	case 3: cout << "три.";
		break;
	case 4: cout << "четыре.";
		break;
	case 5: cout << "пять.";
		break;
	case 6: cout << "шесть.";
		break;
	case 7: cout << "семь.";
		break;
	case 8: cout << "восемь.";
		break;
	case 9: cout << "девять.";
		break;
	case 10: cout << "десять.";
		break;
	case 11: cout << "одиннадцать.";
		break;
	case 12: cout << "двенадцать.";
		break;
	case 13: cout << "тринадцать.";
		break;
	case 14: cout << "четырнадцать.";
		break;
	case 15: cout << "пятнадцать.";
		break;
	case 16: cout << "шестнадцать.";
		break;
	case 17: cout << "семнадцать.";
		break;
	case 18: cout << "восемнадцать.";
		break;
	case 19: cout << "девятнадцать.";
		break;
	default: 
		break;
	}
	switch (N2.quot)
	{
	case 2: cout << "двадцать ";
		break;
	case 3: cout << "тридцать ";
		break;
	case 4: cout << "сорок ";
		break;
	case 5: cout << "пятьдесят ";
		break;
	case 6: cout << "шестьдесят ";
		break;
	case 7: cout << "семьдесят ";
		break;
	case 8: cout << "восемьдесят ";
		break;
	case 9: cout << "девяносто ";
		break;
	default:
		break;
	}
	switch (N2.rem)
	{
	case 1: cout << "один.";
		break;
	case 2: cout << "два.";
		break;
	case 3: cout << "три.";
		break;
	case 4: cout << "четыре.";
		break;
	case 5: cout << "пять.";
		break;
	case 6: cout << "шесть.";
		break;
	case 7: cout << "семь.";
		break;
	case 8: cout << "восемь.";
		break;
	case 9: cout << "девять.";
		break;
	default:
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
