/*
... iss Crew
... Made By Mukho
... 2020-08-15 SAT
... 7829 D4

https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AWtInr3auH0DFASy&categoryId=AWtInr3auH0DFASy&categoryType=CODE
*/

#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
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
		int result; // ���
		int P; // test case ����� ����
		readFile >> P;
		
		vector<int> arr; // ����� �Է¹��� vecter
		for (int i = 0; i < P; i++)
		{
			int temp; // �Է¿� �ӽ� ����
			readFile >> temp;  // �Է�
			arr.push_back(temp); // vector�� ����
		}
		sort(arr.begin(), arr.end()); // ����

		// ó��
		if (P % 2 != 0) // ����� ������ Ȧ���̸�, 
			result = arr[(P - 1) / 2] * arr[(P - 1) / 2]; // ���߾��� ���� ����
		else // ����� ������ Ȧ���̸�
			result = arr[0] * arr[P-1]; // �� �հ� �� ���� ���� ��

		// ��� ���
		cout << "#" << test_case << " " << result << endl;
	}

	// ���� ��ü �ݱ�
	readFile.close();
	return 0;
}