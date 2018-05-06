using namespace std;
void delete_element(node* &top, int uzel)
{
    node* p = find_uzel(top,uzel);
    node *r;
    if(top==p)
       pop(top);
    else
    {
        r = previous(top,p);
        r->next = p->next;
        delete p;
    }
}
void delete_element_data(node* &top, int data)
{
        node* p = find_data(top,data);
        node *r;
        if(p){
            if(top==p)
                   pop(top);
            else
            {
                r = previous(top,p);
                r->next = p->next;
                delete p;
            }
        }

}
void delete_all_data(node* &top, int data)
{
    while(FindAddress(top,data))
    {
        delete_element_data(top,data);
    }
}
void ex7(node* &top)
{
    int temp;
    cout << "Выберите способ исключения элемента из списка"<< endl;
    cout << "1.Удалить первый узел"<< endl;
    cout << "2.Удалить к-тый узел "<< endl;
    cout << "3.Удалить последний узел"<< endl;
    cout << "4.Удалить Узел с заданным значением поля ИНФО"<< endl;
    cin >> temp;
    switch(temp)
    {
    case 1:
        {
            cout << "Исходный список" << endl;
            ShowList(top);
            delete_element(top,0);
            cout << "Вы удалили первый узел под номером 0"<<endl;
            ShowList(top);
            break;
        }
    case 2:
        {
            cout << "Исходный список" << endl;
            ShowList(top);
            int uz;
            cout << "Выберите узел который хотите удалить " << endl;
            cin >> uz;
            delete_element(top,uz);
            ShowList(top);
            cout << "Вы удалили узел под номером " << uz << endl;
            break;
        }
    case 3:
        {
            cout << "Исходный список" << endl;
            ShowList(top);
            node* p = LastUzel(top);
            delete_element(top,p->uzel);
            cout << "после удаления последнего узла" << endl;
            ShowList(top);
            break;

        }
    case 4:
        {
            int data;
            cout << "Исходный список" << endl;
            ShowList(top);
            cout << "Введите поле инфо которое хотите удалить  " << endl;
            cin >> data;
            delete_all_data(top,data);
            ShowList(top);
            break;

        }
    default:
        ex7(top);
    }
}
