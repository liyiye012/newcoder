#include<iostream>
#include<string>
#include<iterator>
#include<algorithm>
#include<vector>
#include<fstream>
#include<map>
using namespace std;
void main()
//链接：https://www.nowcoder.com/practice/ebff2814640a48fdb0d9690677f7c7de?tpId=8&&tqId=11062&rp=2&ru=/activity/oj&qru=/ta/cracking-the-coding-interview/question-ranking
//来源：牛客网
//请设计一个高效的方法，找出任意指定单词在一篇文章中的出现频数。
//给定一个string数组article和数组大小n及一个待统计单词word，请返回该单词在文章中的出现频数。保证文章的词数小于等于1000。
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
	cout << "文本中出现该单词的词频为："<<count << endl;
//http://blog.csdn.net/lily854212198/article/details/7436869
	



}