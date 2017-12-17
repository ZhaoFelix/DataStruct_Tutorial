//约瑟夫问题
/*
用循环链表模拟约瑟夫问题，把41个人自杀的顺序编号输出
*/
#include <stdio.h>
#include <stdlib.h>
typedef struct node {
  int data;
  struct node *next;//指向下一个位置的指针
}node;
node *create(int n){
  node *p = NULL,*head;
  head = (*node)malloc(sizeof(node));
  p = head; //p是标志指针
  node *s;
  int i = 1;
  if(0!=n){
    while (i<=n)  {
      s = (node *)malloc(sizeof(node));//临时节点
      s->data = i++;
      p->next = s;
      p = s;
    }
    s->next = head->next;
  }
  free(head);
  return s->next;
}
int int main(int argc, char const *argv[]) {
  int n = 41;
  int m = 3;
  int i;
  node *p = create(n);
  node *temp;
  m %= n;
  while (p != p->next) {
    for (i = 1; i< m-1;i++){
      p = p->next;
    }
    printf("d->\n",p->next->data);
    temp = p->next;
    p->next = temp->next;
    free(temp);
    p = p->next;
  }
    printf("%d\n",p->data);
  return 0;
}
