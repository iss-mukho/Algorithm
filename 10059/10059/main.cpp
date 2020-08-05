/*
... iss Crew
... Made By Mukho
... 2020-08-05 WEN
... 10059 D3

https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AXK6YRNaKq0DFAU3&categoryId=AXK6YRNaKq0DFAU3&categoryType=CODE
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	int totalCase; // ��ü test case ��

	// test case�� �ҷ��� ���� ��ü ����
	ifstream readFile;
	readFile.open("sample_input.txt");

	// ��ü �׽�Ʈ ���̽� ���� ����
	readFile >> totalCase;

	// �� ���ڸ� �Է¹ް�, ó�� �� ������.
	for (int i = 1; i <= totalCase; i++)
	{
		// �Է�
		string number; // 4�ڸ� ���ڸ� �Է¹��� ����
		readFile >> number; // ���Ͽ��� 4�ڸ� ������ �ҷ��� ����

		int dateArr[2] = {}; // �� 2�ڸ��� �� 2�ڸ��� ó���� �迭
		string temp = ""; // ���ڿ��� ������ �ٲٱ� �� ������ �ӽ� �迭
		// �� 2�ڸ� ���� �� int������ ����
		temp += number[0];
		temp += number[1];
		dateArr[0] = stoi(temp);

		temp = "";
		// �� 2�ڸ� ���� �� int������ ����
		temp += number[2];
		temp += number[3];
		dateArr[1] = stoi(temp);

		// ó��
		bool firstCanMM = false, secondCanMM = false; // �� ���ڰ� MM ǥ�Ⱑ �������� �˷��ִ� boolean ����
		string result; // ����� ����� ����

		// MM ǥ�Ⱑ �����Ѱ�?
		if (dateArr[0] >= 1 && dateArr[0] <= 12)
			firstCanMM = true;
		if (dateArr[1] >= 1 && dateArr[1] <= 12)
			secondCanMM = true;

		if (firstCanMM == true && secondCanMM == true)
			result = "AMBIGUOUS";
		else if (firstCanMM == true && secondCanMM == false)
			result = "MMYY";
		else if (firstCanMM == false && secondCanMM == true)
			result = "YYMM";
		else
			result = "NA";

		// ��� ���
		cout << "#" << i << " " << result << endl;
	}

	// ���� ��ü �ݱ�
	readFile.close();
	return 0;
}