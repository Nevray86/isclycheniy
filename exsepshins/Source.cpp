//исключени€
#include<iostream>
#include<string>
#include<fstream>
#include<time.h>
#include<stdlib.h>
using namespace std;

//защита от нуба дурака
int print()
{
	int res;
	do
	{
		try
		{
			string numstr;
			cout << "введите число ";
			getline(cin, numstr);
			res = stoi(numstr);
			return res;
			
		}
		catch (const exception& ex)
		{
			cout << "ошибка: " << ex.what() << ".\n";
		}
	} while (true);


}

double division(double a,double b)
{
	if (b == 0)
		throw logic_error("division by zero");

	return a / b;
}


template <typename T> void Arr(T arr[], int length)
{
	if (length <= 0)
		throw underflow_error("длина массива должна быть положительной ");
	cout << "[";
		for (int i = 0; i < length; i++)
		{
			cout << arr[i] << ", ";
			cout << "\n\n]\b";
		}
}


template <typename T> void filArr(T arr[], int length, int min, int max)
{
	if (length <= 0)
		throw underflow_error("длина массива должна быть положительной ");
	if (max <= min)
		throw invalid_argument("конец диапазона должен быть больше начала");
	srand(time(NULL));

		for (int i = 0; i < length; i++)
		{
			arr[i] = rand() % (max - min) + min;
		}
}




int main() {
	setlocale(LC_ALL, "ru");
	int n,m;

	string path = "file.txt";
	cout << "введите длину массиа:";
	cin >> n;
	try
	{
		int* arr = new int[n] {};// массив заполнитс€ нул€ми  int k{} 
		cout << "изначальный массив\n";
		Arr(arr, n);
		filArr(arr, n, 10, 32);
		cout << "итоговый";
		Arr(arr, n);
	}
	catch (const underflow_error& ex)
	{
		cout << "ошибка " << ex.what() << endl;
	}
	catch (const bad_array_new_length& ex)
	{
		cout << "ошибка создани€ массива " << ex.what() << endl;
	}
	catch (const invalid_argument& ex)
	{
		cout << "ошибка  " << ex.what() << endl;
	}

	//проверка открытие файла использу€ исключение
	/*ofstream out;
	out.exceptions(ios::badbit | ios::failbit | ios::eofbit);  // разрешаем обьекту класса бросать исключени€

	try
	{
		out.open(path);

		string str;
		cout << "введите строку\n";
		getline(cin, str);
		out << str + "\n";
		cout << "запись в файле \n";



		out.close();
	}
	catch (const ios::failure& ex){
	
		cout << "ошибка " << ex.what() << endl;
		cout << "код ошибки: " << ex.code() << endl;
	}*/



	//деление
	/*try
	{
		cout << "введите 2 числа ";
		cin >> n >> m;
		cout << n << " / " << m << " = " << division(n, m) << endl;
	}
	catch (const logic_error& ex)
	{
		cout << "ошибка: " << ex.what() << endl;
	}*/



	/*n = print();
	cout << "введено " << n << endl;*/


	//защита от нуба дурака
	/*bool check = false;
	do
	{
		try
		{
			string numstr;
			cout << "введите число ";
			getline(cin, numstr);
			n = stoi(numstr);
			cout << "введено число " << n << endl;
			check = true;
		}
		catch (const exception& ex)
		{
			cout << "ошибка: " << ex.what() << ".\n";
		}
	} while (!check);*/


	// выход за числовой диапазон
	/*try
	{
		cout << "введите число  от 1 до 10 ";
		cin >> n;
		if (n < 1)
			throw 0;
		if (n > 10)
			throw  "число больше указанного диапазона \n"; 
		cout << "верно \n";
		
	
	}
	catch (const int ex)
	{
		if (ex == 0)
			cout << "ошибка число меньше указанного диапазона \n";
		if(ex==11)
			cout << "ошибка число больше указанного диапазона \n";
		
	}
	catch (const char ex[])
	{
		cout << "ошибка !" << ex << endl;
	}

	cout << "след. прог ";*/

	return 0;
}