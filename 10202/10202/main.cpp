/*
... iss Crew
... Made By Mukho
... 2020-08-07 FRI
... 10202 D5

https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AXMCa8EaVioDFAWv&categoryId=AXMCa8EaVioDFAWv&categoryType=CODE
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
		int stringNum; // ���� ��
		string strA, strB, strC; // �Է¹��� ���ڸ� ������ string ���� 3��
		readFile >> stringNum >> strA >> strB >> strC; // �Է�

		// ó��
		int count = 0; // ��ȸ ��ȯ�ϸ� ���� ���� ���ڿ��� �Ǵ��� �����ϴ� ����
		
		for (int i = 0; i < stringNum; i++)
		{
			bool isSameAB = true;
			bool isSameAC = true;
			bool isSameBC = true;

			// �� �ڸ����� ���ڰ� �ٸ��� count�� 1 ������Ŵ.
			if (strA[i] != strB[i])
				isSameAB = false;
			if (strA[i] != strC[i])
				isSameAC = false;
			if (strB[i] != strC[i])
				isSameBC = false;

			if (isSameAB && isSameAC && isSameBC) // ���� ���� ���(TTT or TT*, *�� ��ܳ���� ���� T)
				continue; // �ٲ� �ʿ䰡 ����.
			else if (!isSameAB && !isSameAC && !isSameBC) // ���� �ٸ� ���(FFF or FF*, *�� ��ܳ���� ���� F)
				count += 2; // 2���� ���ڸ� �ٲ���� ��.
			else // 2���� ���ڰ� ���� 1���� ���ڰ� �ٸ� ���(TFF)
				count += 1; // 1���� ���ڸ� �ٲ���� ��.
		}

		// ��� ���
		cout << "#" << test_case << " " << count << endl;
	}

	// ���� ��ü �ݱ�
	readFile.close();
	return 0;
}