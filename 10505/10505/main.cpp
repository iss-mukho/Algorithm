/*
... iss Crew
... Made By Mukho
... 2020-08-12 WEN
... 10505 D3

https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AXNP4CvauaMDFAXS&categoryId=AXNP4CvauaMDFAXS&categoryType=CODE*/

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
		int N; // ������ ����
		readFile >> N;

		// N ũ���� int�� �迭 �����Ҵ�
		int* arr;
		arr = new int[N];
		int temp = 0 ;//  ��� �ҵ��� ����ϱ� ���� ����� �ӽú���

		// N��ŭ �Է� ����
		for (int i = 0; i < N; i++)
		{
			readFile >> arr[i];
			temp += arr[i];
		}

		// ó��
		double avg = temp / N; // ��� �ҵ�
		int count = 0; // ��� �ҵ� ���ϸ� ���� ���� ����

		// ��� ������ �ҵ��� ���� ������� �� ���
		for (int i = 0; i < N; i++)
			if (arr[i] <= avg)
				count++;

		// ��� ���
		cout << "#" << test_case << " " << count << endl;
	}

	// ���� ��ü �ݱ�
	readFile.close();
	return 0;
}