/*
... iss Crew
... Made By Mukho
... 2020-08-11 TUE
... 1926 D2

https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV5PTeo6AHUDFAUq&categoryId=AV5PTeo6AHUDFAUq&categoryType=CODE
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	int test_case; // �׽�Ʈ�� �׽�Ʈ�� ��ȣ�� ������ ����
	int N; // ���� N

	// test case�� �ҷ��� ���� ��ü ����
	ifstream readFile;
	readFile.open("input.txt");

	// ������ ����
	readFile >> N;

	// �� ���ڸ� �Է¹ް�, ó�� �� ������.
	for (test_case = 1; test_case <= N; ++test_case)
	{
		// ó��, ��� ���
		int temp = test_case; // ���ڸ� ����ϱ� ���� �ӽ� ����
		int count = 0; // �ڼ�ĥ Ƚ���� ������ ����

		while (temp != 0) // ���ڸ����� ���� Ȯ��
		{
			if (temp % 10 == 3 || temp % 10 == 6 || temp % 10 == 9) // �ش� �ڸ����� 3, 6, 9�� ���
				count++; // �ڼ�ĥ Ƚ�� 1 ����
			temp /= 10; // ���� �ڸ����� ����
		}

		// �ܰ谡 �ٲ� �� ���� ���� ���
		if (test_case > 1)
			cout << ' ';

		// 3, 6, 9�� ���� ��� �ش� ���ڸ� ���
		if (count == 0)
			cout << test_case;
		// 3, 6, 9�� ���� ��� �ش� ������ŭ �ڼ�('-')�� ���
		else
			for (int i = 0; i < count; i++)
				cout << '-';
	}

	// ���� ��ü �ݱ�
	readFile.close();
	return 0;
}