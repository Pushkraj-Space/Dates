#include<iostream>
using namespace std;
class date{
    int d,m,y;
    public:
    int get(){
        int arr[]={31,28,31,30,31,30,31,31,30,31,30,31},flag=1;
        cout<<"\nEnter Day Month and year\n";
        cin>>d>>m>>y;
        if(y%4==0)
            arr[1] = 29;
        if((d>arr[m-1]) || (m>12) || (y<=0)){
            cout<<"\tDate is Invalid \n";
            flag = 0;
        }
        else cout<<"\tYour Date :-"<<d<<"/"<<m<<"/"<<y<<"\n";
        return flag;
    }
    void show(date p){
        if(y==p.y){
            if(m==p.m){
                if(d==p.d)
                    cout<<"\n\tDates are same \n";
                else if(d>p.d)
                    cout<<"\n\tDate 1 is Greatest\n";
                else
                    cout<<"\n\tDate 2 is Greatest\n";
            }else if(m>p.m)
                cout<<"\n\tDate 1 is Greatest\n";
            else
                cout<<"\n\tDate 2 is Greatest\n";
        }
        else if(y>p.y)
            cout<<"\n\tDate 1 is Greatest\n";
        else 
            cout<<"\n\tDate 2 is Greatest\n";
    }
};
int main(){
    int a,b;
    date d1,d2;
    a = d1.get();
    // if(a!=0)
    b = d2.get();
    if(a && b)
    d1.show(d2);
    else 
        cout<<"\nEnter Valid date to view Greatest Date \n";
    return 0;
}