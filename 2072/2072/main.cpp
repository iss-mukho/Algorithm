/*
... iss Crew
... Made By Mukho
... 2020-08-13 THU
... 2072 D1

https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV5QSEhaA5sDFAUq&categoryId=AV5QSEhaA5sDFAUq&categoryType=CODE
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	int test_case; // �׽�Ʈ�� �׽�Ʈ�� ��ȣ�� ������ ����
	int T; // ��ü test case ��

	// test case�� �ҷ��� ���� ��ü ����
	ifstream readFile;
	readFile.open("input.txt");

	// ��ü �׽�Ʈ ���̽� ���� ����
	readFile >> T;

	// �� ���ڸ� �Է¹ް�, ó�� �� ������.
	for (test_case = 1; test_case <= T; ++test_case)
	{
		// �Է�
		int arr[10] = {}; // �׽�Ʈ ���̽� 10���� ������ �迭
		for(int i=0;i<10;i++)
			readFile >> arr[i]; // �Է�

		// ó��
		int sum = 0; // Ȧ���� ���� ����
		for (int i = 0; i < 10; i++)
			if (arr[i] % 2 == 1)
				sum += arr[i];

		// ��� ���
		cout << "#" << test_case << " " << sum << endl;
	}

	// ���� ��ü �ݱ�
	readFile.close();
	return 0;
}