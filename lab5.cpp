#include "main.h"


int main()
{
    int hrs, min, res;
    int sec, my_sec;

    int* arr = new int[3];
    char d, str[10];
    TimeConverter my_time;
    cout << "Print your time: ";
    cin >> str;

    istringstream s(str);
    s >> hrs >> d >> min >> d >> sec;
    res = my_time.time_convert(hrs, min, sec);
    cout << "Time in seconds: " << res << "\n" << endl;
    cout << "Print your time in seconds: ";
    cin >> my_sec;
    arr = my_time.time_convert(my_sec, arr);
    cout << "Hours: " << arr[0] << "\n" << "Minutes: " << arr[1] << "\n" << "Seconds: " << arr[2] << endl;
}