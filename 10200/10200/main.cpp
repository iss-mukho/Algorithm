/*
... iss Crew
... Made By Mukho
... 2020-08-04 TUE
... 10200 D3

https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AXMCXV_qVgkDFAWv&categoryId=AXMCXV_qVgkDFAWv&categoryType=CODE
*/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	int totalCase; // ��ü test case ��
	
	// test case�� �ҷ��� ���� ��ü ����
	ifstream readFile;
	readFile.open("sample_input.txt");

	// ����� ������ ���� ��ü ����
	ofstream writeFile;
	writeFile.open("sample_output.txt");

	// ��ü �׽�Ʈ ���̽� ���� ����
	readFile >> totalCase;

	// �� ���ڸ� �Է¹ް�, ó�� �� ������.
	for (int i = 1; i <= totalCase; i++)
	{
		// �Է�
		int subCase, numA, numB; // �ο� ��, A ������ ��, B ������ ��
		readFile >> subCase >> numA >> numB;

		// ó��
		int resultMax, resultMin; // �ִ� �ߺ� ������ ��, �ּ� �ߺ� ������ ��
		resultMax = numA > numB ? numB : numA; // �ִ� �ߺ� ������ �� = �� ���� �� ���� ����

		// �ּ� �ߺ� ������ ��
		if ((numA + numB) > subCase)
			resultMin = (numA + numB) - subCase;
		else
			resultMin = 0;
		
		// ����
		writeFile << "#" << i << " " << resultMax << " " << resultMin << endl;
	}

	// ���� ��ü �ݱ�
	readFile.close();
	writeFile.close();
	return 0;
}