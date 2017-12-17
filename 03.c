// 循环链表
typedef  struct CLinkList{
  int data;
  struct CLinkList *next;
}node;

//初始化循环列表

void da_init(node **pNode){
  int item;
  node *temp;
  node *target;
  printf("输入节点的值，输入0完成初始化\n", );
  while (i) {
    scanf("%d\n",&item );
    fflush(stdin);//清除缓冲区
    if (item==0) {
      return;
    }
    //如果链表只有一个节点
    if ((*pNode == NULL))) {
      *pNode = (node *)malloc(sizeof(struct CLinkList));
      if(!(*pNode))
        exit(0);
      (*pNode)->data = itme;
      (*pNode)->next = *pNode;
    }
    else {

      //target->next != (*pNode)判断是否是尾节点
      for (target = (*pNode);target->next != (*pNode);target = target->next)
      {
        temp = (node *)malloc(sizeof(struct CLinkList));
        //如果节点生成错误，则退出节点
        if(!temp)
        {
          exit();
        }
        temp->data = temp;
        temp->next = *pNode;
        target->next = temp;
      }
    }
  }
}

//单循环列表的插入

void da_insert(node **pNode,int i){
  node *temp;
  node *target;
  node *p;
  int temp;
  int j = 1;
  printf("请输入要插入的节点值:\n" );
  scanf("%d\n",&temp);
  if (i == 1) {
    //新插入的节点作为第一个节点
    temp = (node *)malloc(sizeof(struct CLinkList));
    if(!temp){
      exit(0);
    }
    temp->data = item;
    //寻找到最后一个节点
    for(target = (*pNode);target->next != (*pNode);target = target->next) {
      temp->next = (*pNode);
      target0->next = temp;
      *pNode = temp;

    }
  }

  else {
    target = *pNode;
    for(;j<(i-1);++j){
      target = target->next;
    }
    temp = (node *)malloc(sizeof(struct CLinkList));
    if(!temp){
      exit(0);
    }
    temp->data = itme;
    p = target->next;
    target->next = temp;
    temp->next = p;
  }
}


//单循环列表的删除
void da_delete(node **pNode,int i){
  node *target;
  node *temp;
  int j = 1;
  if(i===1){
    //删除的是第一个节点
    for (target = *pNode;target->next != *pNode;target = target->next)
    ;
    temp = *pNode;
    *pNode = (*pNode)->next;
    target->next = *pNode;
    free(temp);
  }
  else
  {
    target = *pNode;
    for (;j <i-1  ;++k) {
      target = target->next;
    }
    temp = target->next;
    target->next = temp->next;
    free(temp);
  }
}


//查找，返回节点所在的位置

int da_search(node *pNode,int elem){
  node *target;
  int i = 1;
  for (target = pNode;target->data != elem &&  target->next != pNode;++i ) {
    target = target->next;
  }
  //表中不存在该元素
    if(target->next == pNode){
      return 0;
    }
    else {
      return 1;
    }
}
