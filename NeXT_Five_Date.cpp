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
            flag=0;
        }
        else cout<<"\tYour Date :-"<<d<<"/"<<m<<"/"<<y<<"\n";
        return flag;
    }
    void show(){
        int arr[]={31,28,31,30,31,30,31,31,30,31,30,31};
        if(y%4==0)
            arr[1] = 29;
        cout<<"Next Five Dates are :- \n";
        for(int i=0; i<5; i++){
            
            if(m==12 && d==31){
                y++;
                m=1;
                d=0;
            }
            if(d==arr[m-1]){
                d=0;
                m++;
            }
            d++;
            cout<<"\t"<<d<<"/"<<m<<"/"<<y<<"\n";
        }
    }
};
int main(){
    int a;
    date d1;
    a = d1.get();
    if(a==0)
        cout<<"\nEnter Valid date to view Next Dates \n\n";
    else
    d1.show();
    return 0;
}