using namespace std;
void ex2(node* &top)
{
    int temp;
    cout << "��������� ������� � :" << endl;
    cout << "1. �-���� ����" << endl;
    cout << "2. ���������� ����" << endl;
    cout << "3.� ���� �������� ��������� ����" << endl;
    cout << "������� ����� ��������: " ;
    cin >> temp;
    switch(temp)
    {
        case 1:
            {
                int uzel;
                cout << "������� ����� ���� �������� ������ ��������: ";
                cin >> uzel;
                FindUzel(top,uzel);
                ShowList(top);
                break;
            }
        case 2:
            {
                node* p = LastUzel(top);
                cout << p->uzel << "-� ���� �������� ������:" << endl;
                cout << p->data << endl;
                cout << "������ �� �������� y-yes n-no ?";
                char fl;
                cin >> fl;
                if (fl == 'y')
                {
                    int data;
                    cout << "������� ����� ������� ������ ���������: ";
                    cin >> data;
                    p->data = data;
                }
                else{
                    cout << "������ ������� ����������";
                }
                ShowList(top);
                break;
            }
        case 3:
            {
                int dat;
                cout << "������� ���� ����: ";
                cin >> dat;
                node* q = FindAddress(top,dat);
                cout << q->uzel << "-� ���� �������� ������:" << endl;
                cout << q->data << endl;
                cout << "������ �� �������� y-yes n-no ?";
                char fl;
                cin >> fl;
                if (fl == 'y')
                {
                    int data;
                    cout << "������� ����� ������� ������ ���������: ";
                    cin >> data;
                    q->data = data;
                }
                else{
                    cout << "������ ������� ����������";
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
