/*
... iss Crew
... Made By Mukho
... 2020-08-09 SUN
... 9317 D3

https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AW-hOY5KeEIDFAVg&categoryId=AW-hOY5KeEIDFAVg&categoryType=CODE
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
	readFile.open("sample_input.txt");

	// ��ü �׽�Ʈ ���̽� ���� ����
	readFile >> T;

	// �� ���ڸ� �Է¹ް�, ó�� �� ������.
	for (test_case = 1; test_case <= T; ++test_case)
	{
		// �Է�
		int N; // �׽�Ʈ ���̽� ���ڿ��� ����
		string correctStr; // ���� ����� �ϴ� ���ڿ�
		string inputStr; // ���� ���� ���ڿ�
		readFile >> N >> correctStr >> inputStr;

		// ó��
		int correctChar = 0; // �°� �޾� ���� ������ ����
		for (int i = 0; i < N; i++)
			if (correctStr[i] == inputStr[i])
				correctChar++;

		// ��� ���
		cout << "#" << test_case << " " << correctChar << endl;
	}

	// ���� ��ü �ݱ�
	readFile.close();
	return 0;
}