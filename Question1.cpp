//Name- Tasfique Enam
//Student ID- J16020825/5886429
//LabTask1
#include <iostream>

using namespace std;

int main()
{
    int year;

    do{
        cout<<"Enter the year"<<endl;
        cin>>year;

        if(year>1582) {

            if((year%4==0 && year%100!=0) || year%400==0) {
                cout<<"It is a leap year"<<endl;
            }
                /*else if(year%4==0 && year%100!=0) {
                    cout<<"It is a leap year"<<endl;
                }*/
            else {
                cout<<"it is not a leap year"<<endl;
            }

        } else if( year > 0 && year < 1582) {
            cout<<"Input error try again"<<endl;
        }

    }while(year!=0);

    return 0;
}
