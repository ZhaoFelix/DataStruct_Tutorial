//头插法建立单链表

/*
插入的节点次序与输入的顺序相反
*/
void createListHead (LinkList *L,int n)
{
  LinkList p;
  int i;
  srand(time(0));//初始化随机数种子
  *L = (LinkList)malloc(sizeof(Node));
  (*L)->next = NULL;
  for(i=0;i<n;i++){
    p = (LinkList)malloc(sizeof(Node));//生成新的节点
    p->data = rand()%100+1;
    p->next = (*L)->next;
    (*L)->next = p;
  }
}

//尾插法建立单链表

void creatListTail(LinkList *L,int n)
{
  LinkList p,r;
  int i;
  srand(time(0));
  *L = (LinkList)malloc(sizeof(Node));
  r = *L;
  for(i=0;i<n;i++){
    p = (Node *)malloc(sizeof(Node));
    p->data = rand()%100+1;
    r->next = p;
    r = p;
  }
  r->next = NULL;
}


//单链表的整表删除

Status clearList(LinkList *L)
{
  LinkList p,q;
  p = (*L)->next;
  while(p){
    q = p->next;
    free(p);
    p = q;
  }
  (*L)->next = NULL;
  return OK;
}
