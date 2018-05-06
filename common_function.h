#include <bits/stdc++.h>
using namespace std;
void PushData(node* &top, int data)
{
    node* p = new node;
    p->data = data;
    p->next = top;
    top = p;
}
void nomeration(node* &top)
{
    int uzel = 0;
    node* p = top;
    while(p)
    {
        p->uzel = uzel;
        p = p->next;
        uzel++;
    }

}
void CreateList(ifstream &fin,node* &top)
{
    top = NULL;
    int x;
    while(fin >> x)
    {
        PushData(top,x);
    }
    nomeration(top);
}
node* LastUzel(node* &top)
{
    node* p = top;
    while(p->next)
    {
        p = p->next;
    }
    return p;
}
node* FindAddress(node* &top,int data)
{
    node* p = top;
    while(p && (p->data!=data))
    {
        p = p->next;
    }
    return p;
}

void ShowList(node* top)
{
    cout << "Узел  Инфо" << endl;
    while(top)
    {
        cout.width(3);
        cout << top->uzel;
        cout.width(5);
        cout << top->data << endl;
        top = top->next;
    }
    cout << endl;
}
void FindUzel(node* &top, int uzel)
{
  node* p = top;
  while(p && (p->uzel!=uzel))
  {
      p = p->next;
  }
  if(p)
  {
      cout << uzel << "-й узел содержит данные:" << endl;
      cout << p->data << endl;
      cout << "хотите их изменить y-yes n-no ?";
      char fl;
      cin >> fl;
      if (fl == 'y')
      {
          int data;
          cout << "Введите число которое хотите поставить: ";
          cin >> data;
          p->data = data;
      }
      }
    else {
        cout << "Узла с таким индексом не существует" << endl;
  }
}
int ColUz(node* p, int data)
{
    int col = 0;
    while (p)
    {
        if(p->data == data)
            col++;
        p = p->next;
    }
    return col;
}
void concot(node* &top, node* &top2)
{
    node* p = top;
    node* q = top2;
    while(p->next)
    {
        p = p->next;
    }
    p->next = q;
    delete q;
    p = top;
    nomeration(top);
}

node* previous(node* top, node* p)
{
    node* pr;
    node* q = top;
    pr = NULL;
    while(q!=p&&q)
    {
        pr = q;
        q = q->next;
    }
    if(q==p)
        return pr;
    else
        return NULL;
}
node* find_uzel(node* top,int uzel)
{
    node* p = top;
    while((p->uzel!=uzel) && p)
    {
      p = p->next;
    }
    return p;
}
node* find_data(node* top,int data)
{
    node* p = top;
    while((p->data!=data) && p)
    {
      p = p->next;
    }
    if(p->data==data)
        return p;
    else return NULL;
}
void pop(node* &top)
{
    node* p;
    if(top){
        p = top->next;
        delete top;
        top = p;
    }
}
bool is_member(node* top,int data)
{
    while(top)
    {
        if (top->data == data)
            return true;
    }
    return false;
}
