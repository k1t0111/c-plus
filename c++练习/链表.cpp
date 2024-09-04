/*        c++      ʵ������   */

#include <iostream>
using namespace std; 

class Node                   //�ڵ���
{
public:
	Node* next;              //�ڵ�β�� ָ��
	int date;                //�ڵ�����
};

class List                   //����һ����������
{
public:
	Node* head;              //����ͷ��
	int size;                //size �ڵ����
};

/* ��������: ��ʼ���������� */
List* List_Init()            
{
	List* L = new List;      //�ⲿ�����µ�����
	L->head = NULL;          
	L->size = 0;
	return L;

}

/*��������:��ֵ�����������*/
List* List_Finish(List* L, int num)
{
	if (L->head == NULL)
	{
		Node* New_Node = new Node;//�����½ڵ�
		L->size++;                //�ڵ��1
		L->head = New_Node;
		New_Node->date = num;     //�ڵ������½ڵ㸳ֵ
		New_Node->next = NULL;
	}
	else
	{
		Node* p=NULL;		      //����һ���µĽڵ�ָ��
		p->next = L->head;        //p�� next ��headͬ�� 
		while (p->next != NULL)
		{
			p = p->next;          //ͨ���м�ڵ�p �ҵ� �ڵ�ĩβ
		}
		L->size++;                //�ڵ��1
		Node* New_Node = new Node;//�����½ڵ�
		p->next = New_Node;
		New_Node->date = num;     //�ڵ������½ڵ㸳ֵ
		New_Node->next = NULL;
	}

	return L;
}

/*��������:�ͷ�����*/
int List_Free(List* L)
{
	if (L->head == NULL)         //�ж��Ƿ�Ϊ�� ����
	{
		delete L;                //ɾ��������
		L = NULL;
		return 0;
	}
	else
	{
		Node* p1,*p2;			 //���������µĽڵ�ָ��
		p1 = L->head;            //p�� next ��headͬ�� 
		while (p1 != NULL)
		{
			p2 = p1;
			p1 = p2->next;       //ͨ���м�ڵ�p �ҵ� �ڵ�ĩβ
			delete p2;
		}
		delete L;                //ɾ��������
		L = NULL;
	}
}

/*��������:  չʾ�������� */
void List_Display(List *L)
{
	cout << "Total " << L->size; //��������
	Node* p;                     //�����µ� �ڵ�
	p = L->head;                 //p��Ϊ��һ���ڵ�
	while (p != NULL)
	{
		cout << p->date;
		p = p->next;             //p������һ���ڵ�  
	}

}
int main()
{
	List* L;                     //���� ����
	L = List_Init();             //�����ʼ��
	int i,n,num;                 //i����ѭ�� n��������  num ����
	cout << "Hello��How many num do you want��"<<endl;
	cin >> n;
	cout << "Please input the whole num in order: ";
	for (i = 0; i < n; i++)    //ѭ�������Դ�д��
	{
		cin >> num;
		                         //д�� num ��Ӧ�Ľڵ�
		L = List_Finish(L, num);
	}
	List_Display(L);             //չʾ����
	List_Free(L);                //�ͷ�����
	return 0 ;
}
