#include <stdio.h>
#include <math.h>
#include <string>
using namespace std;
int d;
int m;
int y;
int daysMoths[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
string days[] = {"MONDAY", "TUESDAY", "WEDNESDAY", "THURSDAY", "FRIDAY", "SATURDAY", "SUNDAY"};
int YEAR = 2015;
int DAY = 22;
int MONTH = 5;
int WEEKDAY = 4;
int t;
int mod( int n, int m ){
    return ( n%m + m)%m;
}
int daysAt(int month, int year){
    if( month == 2 && year%4 == 0){
        if( year % 100 == 0 )return (year/100)%4 == 0 ? 29 : 28;
        return 29;
    }
    return daysMoths[month];
}
int main(){
    scanf("%d",&t);
    while( t-- ){
        YEAR = 2015;
        DAY = 22;
        MONTH = 5;
        WEEKDAY = 4;
        scanf("%d",&d);
        scanf("%d",&m);
        scanf("%d",&y);
        while( !( YEAR == y && DAY == d && MONTH == m  ) ){
            WEEKDAY = mod(WEEKDAY - 1,7);
            DAY--;
            if( DAY == 0 )DAY = daysAt(--MONTH,YEAR);
            if( MONTH == 0 ){
                YEAR--;
                MONTH = 12;
                DAY = daysMoths[MONTH];

            }
        }
        printf("DAY AT %d %d %d: %s\n", d, m, y, days[WEEKDAY].c_str());
    }

}

