#include<iostream>
using namespace std;
class timeconverter{
    public:
    int hours;
    int seconds;
    int minutes;
    int remainingseconds;
    int hour;
    int minute;
    int second;

    void convertstohms(void){
        cout<<"enter seconds:"<<endl;
        cin>>seconds;
        hours=seconds/3600;
        minutes=(seconds%3600)/60;
        remainingseconds=seconds%60;
        cout<<"hours:"<<hours<<"minutes:"<<minutes<<"seconds:"<<remainingseconds<<endl;

    }
    void converthmstos(void)
    {
        cout<<"enter hours:"<<endl;
        cin>>hour;
        cout<<"enter minute:"<<endl;
        cin>>minute;
        cout<<"enter second:"<<endl;
        cin>>second;
        int totalseconds=(hour*3600)+(minute*60)+second;
        cout<<"total seconds are:"<<totalseconds<<endl;

        
    }
};
int main(){
    timeconverter t1;
    cout<<"from seconds to hh:mm:ss="<<endl;
    t1.convertstohms();
    cout<<"from hh:mm:ss to seconds="<<endl;
    t1.converthmstos();
    return 0;
}