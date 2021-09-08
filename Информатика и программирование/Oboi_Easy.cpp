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
    cout << "Калькулятор обоев." << endl;
    a = check_values("Введите длину помещения(см): ");
    
    b = check_values("Введите ширину помещения(см): ");
    
    h= check_values("Введите высоту помещения(см): ");
    
    arul = check_values("Введите длину рулона(см): ");
    while(arul<h)
    {
        cout << "Ошибка. Длина рулона обоев не может быть отрицательной или меньше высоты помещения." << endl;
        arul = check_values("Введите длину рулона(см): ");
    }
    brul=check_values("Введите ширину рулона: ");;
    
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
    cout << text;
    cin >> temp;
    while (temp<=0){
        cout << "Ошибка. Введите положительное значение" << endl << text ;
        cin >> temp;
        }
    return temp;
    }
