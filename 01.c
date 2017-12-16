
// 定义一个结构体链表
typedef struct Node
{
  ElementType data; //数据域
  struct Node* Next;// 指针域
} Node;
typedef struct Node* LinkList;


//读取指定的元素
Status getElement(LinkList L,int i ,ElemType *e)
{
  int j;
  LinkList p;
  p = L->next;
  j = i;

  while (p && j<i) {
    p = p->next; //指针移动
    ++j;
    
  }
  if (!p || j>i)  {
    return ERROR;
  }
  *e = p->data;
  return OK;
}
