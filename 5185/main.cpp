/*
... iss Crew
... Made By Mukho
... 2020-08-24 MON
... 5185. [���̽� S/W �����ذ� ����] 1���� - ������(D2)

*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	int test_case; // �׽�Ʈ�� �׽�Ʈ�� ��ȣ�� ������ ����
	int T; // �׽�Ʈ ���̽� �� T

	// test case�� �ҷ��� ���� ��ü ����
	ifstream readFile;
	readFile.open("sample_input.txt");

	// �׽�Ʈ ���̽� ���� ����
	readFile >> T;

	// �� ���ڸ� �Է¹ް�, ó�� �� ������.
	for (test_case = 1; test_case <= T; ++test_case) {
		// �Է� 
		int N; // �ڸ� ��
		string hexStr; // 16����
		readFile >> N;
		readFile >> hexStr;

		// ó��
		string bnsStr = ""; // 2����
		for (int i = 0; i < N; i++) {
			switch (hexStr[i]) {
			case '0':
				bnsStr += "0000";
				break;
			case '1':
				bnsStr += "0001";
				break;
			case '2':
				bnsStr += "0010";
				break;
			case '3':
				bnsStr += "0011";
				break;
			case '4':
				bnsStr += "0100";
				break;
			case '5':
				bnsStr += "0101";
				break;
			case '6':
				bnsStr += "0110";
				break;
			case '7':
				bnsStr += "0111";
				break;
			case '8':
				bnsStr += "1000";
				break;
			case '9':
				bnsStr += "1001";
				break;
			case 'A':
				bnsStr += "1010";
				break;
			case 'B':
				bnsStr += "1011";
				break;
			case 'C':
				bnsStr += "1100";
				break;
			case 'D':
				bnsStr += "1101";
				break;
			case 'E':
				bnsStr += "1110";
				break;
			case 'F':
				bnsStr += "1111";
				break;
			}
		}

		// ���
		cout << "#" << test_case << " " << bnsStr << endl;
	}

	// ���� ��ü �ݱ�
	readFile.close();
	return 0;
}