#include<iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int check_values(string text);
int main()
{
    int a,b,h,rul=0,p,arul,brul,cnt=0,i=0,l=0;
    float j=0;
    setlocale(LC_ALL,"Russian");
    cout << "����������� �����." << endl;
    a = check_values("������� ����� ���������(��): ");
    
    b = check_values("������� ������ ���������(��): ");
    
    h= check_values("������� ������ ���������(��): ");
    
    arul = check_values("������� ����� ������(��): ");
    while(arul<h)
    {
        cout << "������. ����� ������ ����� �� ����� ���� ������������� ��� ������ ������ ���������." << endl;
        arul = check_values("������� ����� ������(��): ");
    }
    brul=check_values("������� ������ ������: ");;
    
    p=a+a+b+b;
    while(p>brul)
    {
        rul++;
        p = p-((arul/h)*brul);
        cnt=cnt+((arul%h)*brul);
    }
    i=cnt;
    if(p!=0)
    {
        rul++;
        l=(arul*brul)-(p*h);
    }
    i=i+l;
    j=((float)i/(rul*arul*brul)*100);
    cout << rul << endl << round(j) << "%" << endl;
    system("pause");
}   
int check_values(string text){
    int temp;
    int flag=0;
    cout << text;
    
    while (flag==0)
    {   
        cin>> temp;
        if((cin.fail() || char(cin.peek()) != '\n')){
            cout << "Error. This variable is not number!"<< endl << text;
            cin.clear();
            cin.ignore(32767, '\n');}
        else{
            if (temp<=0){
                cout << "Error. Enter positive value!" << endl << text ;
            }else{
                flag=1;} 
            }
    }
    
    return temp;
    }
