
// 定义一个结构体链表
typedef struct Node
{
  ElementType data; //数据域
  struct Node* Next;// 指针域
} Node;
typedef struct Node* LinkList;


//读取指定位置i的元素
//时间复杂度为O(n)
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
//单链表的元素插入
Status ListInsert(LinkList L,int i,ElementType e)
{
  int j;
  LinkList p,a;
  p = *L;
  j = 1;
  while (p && j<i) {
    //指针循环遍历
    p = p->next;
    j++;

  }
  if(!p || j>i){
    return ERROR;
  }
  s = (LinkList)malloc(sizeof(Node));//为插入的元素分配一个内存
  s->data = e;

  s->next = p->next;
  p->next = s;

  return OK;
}

//单链表的删除操作
Status LinkDelete(LinkList L,int i,ElementType e){
  int j;
  LinkList p,q;
  p = *L;
  j = 1;

  while (p->next && j<i) {
    p = p->next;
    ++j;
  }
  if(!(p->next) || j>i){
    return ERROR;
  }
  q = p->next;
  p->next = q->next;
  *e = q->data;
  free(q);
  return OK;

}
