/*        c++      实现链表   */

#include <iostream>
using namespace std; 

class Node                   //节点类
{
public:
	Node* next;              //节点尾部 指针
	int date;                //节点数据
};

class List                   //创建一个单向链表
{
public:
	Node* head;              //链表头部
	int size;                //size 节点个数
};

/* 函数功能: 初始化基础链表 */
List* List_Init()            
{
	List* L = new List;      //外部函数新的链表
	L->head = NULL;          
	L->size = 0;
	return L;

}

/*函数功能:赋值组成完整链表*/
List* List_Finish(List* L, int num)
{
	if (L->head == NULL)
	{
		Node* New_Node = new Node;//创建新节点
		L->size++;                //节点加1
		L->head = New_Node;
		New_Node->date = num;     //节点连接新节点赋值
		New_Node->next = NULL;
	}
	else
	{
		Node* p=NULL;		      //创建一个新的节点指针
		p->next = L->head;        //p的 next 与head同步 
		while (p->next != NULL)
		{
			p = p->next;          //通过中间节点p 找到 节点末尾
		}
		L->size++;                //节点加1
		Node* New_Node = new Node;//创建新节点
		p->next = New_Node;
		New_Node->date = num;     //节点连接新节点赋值
		New_Node->next = NULL;
	}

	return L;
}

/*函数功能:释放链表*/
int List_Free(List* L)
{
	if (L->head == NULL)         //判断是否为空 链表
	{
		delete L;                //删除链表类
		L = NULL;
		return 0;
	}
	else
	{
		Node* p1,*p2;			 //创建两个新的节点指针
		p1 = L->head;            //p的 next 与head同步 
		while (p1 != NULL)
		{
			p2 = p1;
			p1 = p2->next;       //通过中间节点p 找到 节点末尾
			delete p2;
		}
		delete L;                //删除链表类
		L = NULL;
	}
}

/*函数功能:  展示链表数据 */
void List_Display(List *L)
{
	cout << "Total " << L->size; //数据总数
	Node* p;                     //创建新的 节点
	p = L->head;                 //p成为第一个节点
	while (p != NULL)
	{
		cout << p->date;
		p = p->next;             //p等于下一个节点  
	}

}
int main()
{
	List* L;                     //创建 链表
	L = List_Init();             //链表初始化
	int i,n,num;                 //i控制循环 n数据总数  num 数据
	cout << "Hello！How many num do you want？"<<endl;
	cin >> n;
	cout << "Please input the whole num in order: ";
	for (i = 0; i < n; i++)    //循环数据以此写入
	{
		cin >> num;
		                         //写入 num 对应的节点
		L = List_Finish(L, num);
	}
	List_Display(L);             //展示数据
	List_Free(L);                //释放链表
	return 0 ;
}
