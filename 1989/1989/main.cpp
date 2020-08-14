/*
... iss Crew
... Made By Mukho
... 2020-08-14 FRI
... 1989 D2

https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV5PyTLqAf4DFAUq&categoryId=AV5PyTLqAf4DFAUq&categoryType=CODE
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
		string input; // �׽�Ʈ ���̽��� ������ ���ڿ�
		readFile >> input; // �Է�

		// ó��
		int result = 1; // ��� ��¿� ����. ȸ���̸� 1, ȸ���� �ƴϸ� 0
		int size = input.size() - 1; // ȸ�� �˻�� ����

		for (int i = 0; i < signed(input.size() / 2); i++)
		{
			if (input[i] == input[size]) // ������ ��� ��
				size--;
			else // ȸ���� �ƴ� ��� �ݺ����� Ż���ϰ� result�� 0���� �ٲ�
			{
				result = 0;
				break;
			}
		}
		// ��� ���
		cout << "#" << test_case << " " << result << endl;
	}

	// ���� ��ü �ݱ�
	readFile.close();
	return 0;
}