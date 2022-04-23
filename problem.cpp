#include<bits/stdc++.h>
#define     FAST            ios_base::sync_with_stdio(false); cin.tie(0), cout.tie(0);
#define ll long long
//#define endl '\n'
using namespace std;


int get_1st_weekday(string day)
{
    int count=-1;
    string arr1[7]= {"Sunday", "Monday",  "Tuesday",  "Wednesday",  "Thursday",  "Friday",  "Saturday"};
    string arr2[7]= {"sunday", "monday",  "tuesday",  "wednesday",  "thursday",  "friday",  "saturday"};
    for (int i=0; i<7; i++)
    {
        count++;
        if(arr1[i]==day)
        {
            break;
        }
        else if(arr2[i]==day)
        {
            break;
        }
    }
    return count;
}

bool check_leap_year(int year)
{

    if((year%4 == 0 && year%100 != 0)||year%400 == 0)
    {

        return true;
    }
    return false;
}

int main()
{
    int year,month,day,daysInMonth,weekDay=0,startingDay;
    string starting_day;
    cout<<"Enter your desired year: ";
    cin>>year;
    cout<<"Enter the starting day of the year: ";
    cin>>starting_day;

    string months[]= {"January","February","March","April","May","June","July","August","September","October","November","December"};
    int monthDay[]= {31,28,31,30,31,30,31,31,30,31,30,31};

    startingDay=get_1st_weekday(starting_day);
    if(check_leap_year(year)==true)
    {
        monthDay[1]=29;
    }

    int m=100, n=100, i=0,j=0;
    int **ar=new int *[m];

    for(int i=0; i<m; i++)
    {
        ar[i]= new int [n];
    }

    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            ar[i][j]= 0;
        }
    }

    for(month=0; month<12; month++)
    {
        daysInMonth=monthDay[month];
        j=0;
        for(weekDay=0; weekDay<startingDay; weekDay++)
        {

            ar[i][j] = -1 ;
            j++;
        }
        for(day=1; day<=daysInMonth; day++)
        {
            ar[i][j] = day;
            j++;
            if(++weekDay>6)
            {
                weekDay=0;
            }
            startingDay=weekDay;
        }
        i++;
    }
    int c=0;
    for(int i=0; i<12; i++)
    {
        c=0;
        cout<<"\n\n---------------"<<months[i]<<"-------------------\n";
        cout<<"\n  Sun  Mon  Tue  Wed  Thurs  Fri  Sat\n";

        for(int j=0; j<37; j++)
        {
            if(ar[i][j]==0)
            {
                break;
            }
            c++;
            if(ar[i][j]==-1)
            {
                cout<<"     ";
            }
            else
            {


                if(ar[i][j]==1)
                {
                    printf("*%5d",ar[i][j]);
                }
                else
                {
                    printf("%5d",ar[i][j]);
                }


            }
            if(c==7)
            {
                c=0;
                cout<<endl;
            }
        }
        cout<<endl;
    }


    return 0;
}
