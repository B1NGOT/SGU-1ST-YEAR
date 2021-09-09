#incluse<iostream>
#include<cmath>
using namespace std;

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
    
int main()
{
    int a,b,h,arul,brul,awin,bwin,hwin,dwin,rul=0,cnt=0,p=dwin,
    a = check_values()
    b = check_values()
    h = check_values()
    arul = check_values()
    while(arul<h)
    {
        cout << "Ошибка. Длина рулона обоев не может быть отрицательной или меньше высоты помещения." << endl;
        arul = check_values("Введите длину рулона(см): ");
    }
    brul = check_values()
    awin = check_values()
    bwin = check_values()
    hwin = check_values()
    dwin = check_values()
    while(p>=brul)
    {
        rul++;
        p = p-((h/arul)*brul);
        cnt = cnt+((h%arul)*brul);
    }
    if((p+awin)<=brul)
    {
        rul++;
        cnt=((brul*h)-(awin*bwin);
        if((p+awin)=brul)
        {
            while(int d=(a+a+b+b)-(dwin+awin)>brul)
            {
                rul++;
                d=d-((arul/h)*brul);
                cnt=cnt+((arul%h)*brul);    
            }
            if(d!=0)
            {
                rul++;
                cnt=((arul+brul)-(p*h));
            }
            cnt=(cnt/(rul*arul*brul))*100
            cout << rul << endl << cnt << "%";    
        }
        else
        {
           int d=(a+a+b+b)-(brul-(awin+p))
           while(d>brul)
           {
                rul++
                d=d-((arul/h)*brul)
                cnt=cnt+((arul%h)*brul);
            }
            if(d!=0)
            {
                rul++;
                cnt=cnt+((arul*brul)-(d*h));
            }
            cnt=(cnt/(rul*arul*brul))*100
            cout << rul << endl << cnt << "%";
    }
    
        




















}
