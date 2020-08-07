/*
... iss Crew
... Made By Mukho
... 2020-08-07 FRI
... 9940 D3

https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AXHx23oq0REDFAXR&categoryId=AXHx23oq0REDFAXR&categoryType=CODE
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
		int N; // n��° �׽�Ʈ ���̽�
		readFile >> N; // �Է�
		string result = "Yes"; // ����� ����� str ����. �����̸� Yes, �ƴϸ� No(default).
		int sum = 0; // ������ ���� ����� ����
		int* sy = new int[N]; // ���� �����Ҵ�

		// ó��
		// ����ȭ�� ���� ������ ���θ� || �Ͼ�.. �� loop Ż���ϸ� ������ �ƴѰǵ�?
		for (int i = 0; i < N; i++)
		{
			readFile >> sy[i]; // ������ N��ŭ ���� �Է�
			sum += sy[i];
			if (sy[i] < 1 || sy[i] > N)
				result = "No";
		}
		if (sum != (N * (N + 1) / 2))
			result = "No";

		// ��� ���
		cout << "#" << test_case << " " << result << endl;
		delete []sy;
	}

	// ���� ��ü �ݱ�
	readFile.close();
	return 0;
}