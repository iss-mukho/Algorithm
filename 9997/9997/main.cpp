/*
... iss Crew
... Made By Mukho
... 2020-08-07 FRI
... 9997 D3

https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AXIvNBzKapEDFAXR&categoryId=AXIvNBzKapEDFAXR&categoryType=CODE
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
	readFile.open("1_input.txt");

	// ��ü �׽�Ʈ ���̽� ���� ����
	readFile >> T;

	// �� ���ڸ� �Է¹ް�, ó�� �� ������.
	for (test_case = 1; test_case <= T; ++test_case)
	{
		// �Է�
		int degree; // ����
		readFile >> degree; // �Է�
		
		// ó��
		string result = ""; // ����� ����� str ����
		int hh = degree / 30; // hh�� ������ ����. 30degree �� 1�ð�
		int mm = degree % 30 * 2; // mm�� ������ ����. 1degree �� 2��

		result += to_string(hh); // hh �߰�
		result += " "; // hh�� mm�� ������ ���� �߰�
		result += to_string(mm); // mm �߰�
		
		// ��� ���
		cout << "#" << test_case << " " << hh << " " << mm << endl;
	}

	// ���� ��ü �ݱ�
	readFile.close();
	return 0;
}