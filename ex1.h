using namespace std;
int funforone(int a, int b)
{
    return a+b;
}
void ex1()
{
    srand(time(NULL));
    ifstream fin("data1.txt");
    node* top;
    int  n = 10;
    int a[n];
    for (int i = 0; i<n; i++)
        a[i] = rand() %  21-10;
    cout << "������� 1 ������� ������:" << endl;
    cout << "1. �� � ������ ����������� �����" << endl;
    cout << "2. �� ��������� ��������� �������" << endl;
    cout << "3. �� ������������� ����� ��������� �������" << endl;
    cout << "4. �� ������� F(x[i-1],x[i-2]) ��� i>=3" << endl;
    cout << "�������� ��������: " << endl;
    int k;
    cin >> k;
    switch (k)
    {
        case 1:
            {
             CreateList(fin,top);
             ShowList(top);
             break;
            };
        case 2:
            {
            top = NULL;
            for(int i = 0; i<n; i++)
            {
                PushData(top,a[i]);
            }
            nomeration(top);
            ShowList(top);
            break;
            }
        case 3:
            {
            top = NULL;
            for(int i = 0; i<n; i++)
            {
                if(a[i]>0)
                PushData(top,a[i]);
            }
            nomeration(top);
            ShowList(top);
            break;
            }
        case 4:
            {
                int c;
                cout << "������� ���������� ���������";
                cin >> c;
                int b[c];
                cout << "������� a: ";
                cin >> b[0];
                cout << "������� b: ";
                cin >> b[1];
                for(int i = 2; i<n; i++)
                    b[i] = funforone(b[i-1],b[i-2]);
                top = NULL;
                for(int i = 0; i<n; i++)
                    {
                        PushData(top,b[i]);
                    }
                nomeration(top);
                ShowList(top);
                break;
            }
        default:
            ex1();
    }
}
