using namespace std;
void ex2(node* &top)
{
    int temp;
    cout << "Получение доступа к :" << endl;
    cout << "1. к-тому узлу" << endl;
    cout << "2. последнему узлу" << endl;
    cout << "3.к узлу заданным значением ИНФО" << endl;
    cout << "Введите номер действия: " ;
    cin >> temp;
    switch(temp)
    {
        case 1:
            {
                int uzel;
                cout << "Введите номер узла которого хотите изменить: ";
                cin >> uzel;
                FindUzel(top,uzel);
                ShowList(top);
                break;
            }
        case 2:
            {
                node* p = LastUzel(top);
                cout << p->uzel << "-й узел содержит данные:" << endl;
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
                else{
                    cout << "список остался неизменным";
                }
                ShowList(top);
                break;
            }
        case 3:
            {
                int dat;
                cout << "Введите поле ИНФО: ";
                cin >> dat;
                node* q = FindAddress(top,dat);
                cout << q->uzel << "-й узел содержит данные:" << endl;
                cout << q->data << endl;
                cout << "хотите их изменить y-yes n-no ?";
                char fl;
                cin >> fl;
                if (fl == 'y')
                {
                    int data;
                    cout << "Введите число которое хотите поставить: ";
                    cin >> data;
                    q->data = data;
                }
                else{
                    cout << "список остался неизменным";
                }
                ShowList(top);
                break;
            }
        default:
            {
                ex2(top);
            }

    }

}
