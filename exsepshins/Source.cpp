//����������
#include<iostream>
#include<string>
#include<fstream>
#include<time.h>
#include<stdlib.h>
using namespace std;

//������ �� ���� ������
int print()
{
	int res;
	do
	{
		try
		{
			string numstr;
			cout << "������� ����� ";
			getline(cin, numstr);
			res = stoi(numstr);
			return res;
			
		}
		catch (const exception& ex)
		{
			cout << "������: " << ex.what() << ".\n";
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
		throw underflow_error("����� ������� ������ ���� ������������� ");
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
		throw underflow_error("����� ������� ������ ���� ������������� ");
	if (max <= min)
		throw invalid_argument("����� ��������� ������ ���� ������ ������");
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
	cout << "������� ����� ������:";
	cin >> n;
	try
	{
		int* arr = new int[n] {};// ������ ���������� ������  int k{} 
		cout << "����������� ������\n";
		Arr(arr, n);
		filArr(arr, n, 10, 32);
		cout << "��������";
		Arr(arr, n);
	}
	catch (const underflow_error& ex)
	{
		cout << "������ " << ex.what() << endl;
	}
	catch (const bad_array_new_length& ex)
	{
		cout << "������ �������� ������� " << ex.what() << endl;
	}
	catch (const invalid_argument& ex)
	{
		cout << "������  " << ex.what() << endl;
	}

	//�������� �������� ����� ��������� ����������
	/*ofstream out;
	out.exceptions(ios::badbit | ios::failbit | ios::eofbit);  // ��������� ������� ������ ������� ����������

	try
	{
		out.open(path);

		string str;
		cout << "������� ������\n";
		getline(cin, str);
		out << str + "\n";
		cout << "������ � ����� \n";



		out.close();
	}
	catch (const ios::failure& ex){
	
		cout << "������ " << ex.what() << endl;
		cout << "��� ������: " << ex.code() << endl;
	}*/



	//�������
	/*try
	{
		cout << "������� 2 ����� ";
		cin >> n >> m;
		cout << n << " / " << m << " = " << division(n, m) << endl;
	}
	catch (const logic_error& ex)
	{
		cout << "������: " << ex.what() << endl;
	}*/



	/*n = print();
	cout << "������� " << n << endl;*/


	//������ �� ���� ������
	/*bool check = false;
	do
	{
		try
		{
			string numstr;
			cout << "������� ����� ";
			getline(cin, numstr);
			n = stoi(numstr);
			cout << "������� ����� " << n << endl;
			check = true;
		}
		catch (const exception& ex)
		{
			cout << "������: " << ex.what() << ".\n";
		}
	} while (!check);*/


	// ����� �� �������� ��������
	/*try
	{
		cout << "������� �����  �� 1 �� 10 ";
		cin >> n;
		if (n < 1)
			throw 0;
		if (n > 10)
			throw  "����� ������ ���������� ��������� \n"; 
		cout << "����� \n";
		
	
	}
	catch (const int ex)
	{
		if (ex == 0)
			cout << "������ ����� ������ ���������� ��������� \n";
		if(ex==11)
			cout << "������ ����� ������ ���������� ��������� \n";
		
	}
	catch (const char ex[])
	{
		cout << "������ !" << ex << endl;
	}

	cout << "����. ���� ";*/

	return 0;
}