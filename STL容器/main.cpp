#include<iostream>
#include<vector>
#include<map>
#include<string>

using namespace std;


/*
1.����
1.1˳������
vector ʸ����������װһά����
list ˫����������  ˫������  
deque  ˫�˶�������  ˫�˶���
1.2��������
set  �������� #include<set>
multiset  ���ؼ���
map  ��ӳ������  key-value��ֵ�Բ������ֵ���ظ���һ��һ
mulimap  ����ӳ��  key-value �����ֵ�ظ���һ�Զ�
1.3����������
stack  FILO
queue  FIFO
priority_queue

2.������

3.�����㷨
4.��������
5.������
6.�ռ�������

*/
/*
˳��������
vector  һά���� push_back()β��  push_front() ���ṩ��ʱ�临�Ӷ�̫�ߣ�
        ���Ҫ������λ�ò��룬ʹ��insert
		insert��ʱ��Ҫע���������ʧЧ����
		ɾ��erase
		vector�������ݵ�ʱ�򣬰���1.5����������
list    ˫����������д�������ɾѡ�ã� 
        List����ʧЧ��ɾ����ʧЧ
deque   ��ά����
**����������������Ķ˿ں���**
����������
set         �����   ����  �洢����Ԫ�������Զ��������ʱ�临�Ӷȣ�log2n
multiset    �����   ���ؼ���  ���������ظ�  �洢����Ԫ�� ����

map         �����   ӳ���<key,val>��ֵ��  ��keyֵ��������  ���Ҳ�����keyֵ�ظ�
            ����ʱ��ʧЧ���� ������û�й�ϵ
multimap    �����   ����ӳ������������ظ�  �洢��<key,val>  ����keyֵ�ظ�  key����

STL���е������������̰߳�ȫ�ģ������Ҫ�̰߳�ȫ����Ҫ�Լ�����
*/

int main()
{
	vector<int> vec;
	vec.push_back(10);

	//cout << vec << endl;  vector����û������<<�����
	map<int,string>m;
	m.insert(map<int,string>/*����*/::value_type/*����*/(1,"100")/*����*/);
	//typedef pair<int,string>(2,"200") 
	//val_type����
	//end������һ����Чֵ��
}