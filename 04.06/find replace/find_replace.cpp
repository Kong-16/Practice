#include <iostream>
#include <string>

using namespace std;

int main() {
	string s;
	cout << "�������� ���ڿ��� �Է��ϼ���. �Է��� ���� &�����Դϴ�." << endl;
	getline(cin, s, '&');
	cin.ignore(); // &�ڿ� ���� Enter Ű�� �����ϱ� ���� �ڵ�
	string f, r;
	cout << endl << "find:";
	getline(cin, f, '\n');
	cout << "replace:";
	getline(cin, r, '\n');

	int startIndex = 0;

	while (true) {
		int fIndex = s.find(f, startIndex); //startIndex���� �˻�
		if (fIndex == -1)
			break;
		s.replace(fIndex, f.length(), r); //fIndex ���� f�� ���̸�ŭ r�κ���
		startIndex = fIndex + r.length();
	}
	cout << s << endl;

}