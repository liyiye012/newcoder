#include<iostream>
#include<string>
#include<iterator>
#include<algorithm>
#include<vector>
#include<fstream>
#include<map>
using namespace std;
void main()
//���ӣ�https://www.nowcoder.com/practice/ebff2814640a48fdb0d9690677f7c7de?tpId=8&&tqId=11062&rp=2&ru=/activity/oj&qru=/ta/cracking-the-coding-interview/question-ranking
//��Դ��ţ����
//�����һ����Ч�ķ������ҳ�����ָ��������һƪ�����еĳ���Ƶ����
//����һ��string����article�������Сn��һ����ͳ�Ƶ���word���뷵�ظõ����������еĳ���Ƶ������֤���µĴ���С�ڵ���1000��
{
	char *file = "paper.txt";
	string word = "pigs";
	vector<string> article;
	map<string, int> str;
	string read;
	int count=0;
	ifstream infile;
	infile.open(file, ios::in);
	if (!infile)
	{
		cerr << "open error!" << endl;
		exit(1);
	}
	while (getline(infile, read, ' ')) {//http://blog.csdn.net/sibo626/article/details/6781036
		//http://blog.csdn.net/explorewen/article/details/2433164
		//http://www.tc5u.com/cpp/2391724.htm
		article.push_back(read);
	}
	for (int i = 0; i < article.size(); i++) {
		if (word == article[i]) {
			count++;
		}
	}
	cout << "�ı��г��ָõ��ʵĴ�ƵΪ��"<<count << endl;
//http://blog.csdn.net/lily854212198/article/details/7436869
	



}