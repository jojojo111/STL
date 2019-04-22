#include<iostream>
#include<vector>
#include<map>
#include<string>

using namespace std;

/*
顺序容器：
vector  一维数组 push_back()尾插  push_front() 不提供（时间复杂度太高）
        如果要在任意位置插入，使用insert
		insert的时候，要注意迭代器的失效问题
		删除erase
		vector进行扩容的时候，按照1.5倍进行扩容
list    双向链表（如果有大量的增删选用） 
        List插入失效，删除不失效
deque   二维数组
**整理三个容器里面的端口函数**
关联容器：
set         红黑树   集合  存储单个元素有序（自动排序）最大时间复杂度：log2n
multiset    红黑树   多重集合  允许数据重复  存储单个元素 有序

map         红黑树   映射表<key,val>键值对  用key值进行排序  而且不允许key值重复
            插入时候不失效，和 迭代器没有关系
multimap    红黑树   多重映射表，允许数据重复  存储的<key,val>  允许key值重复  key有序

STL库中的容器都不是线程安全的，如果需要线程安全，需要自己加锁
*/

int main()
{
	vector<int> vec;
	vec.push_back(10);

	//cout << vec << endl;  vector里面没有重载<<运算符
	map<int,string>m;
	m.insert(map<int,string>/*类型*/::value_type/*对象*/(1,"100")/*构造*/);
	//typedef pair<int,string>(2,"200") 
	//val_type类型
	//end返回是一个无效值，
}