/*
... iss Crew
... Made By Mukho
... 2020-08-06 THU
... 10032 D3

https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AXJZ6_6KCLcDFAU3&categoryId=AXJZ6_6KCLcDFAU3&categoryType=CODE
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
		int snackNum, peopleNum; // ���� ��, ��� ��
		readFile >> snackNum >> peopleNum;

		// ó��
		int temp = snackNum % peopleNum;
		int result;
		if (temp != 0 || snackNum < peopleNum)
			result = 1;
		else
			result = 0;

		// ��� ���
		cout << "#" << test_case << " " << result << endl;
	}

	// ���� ��ü �ݱ�
	readFile.close();
	return 0;
}