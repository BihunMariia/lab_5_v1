#include "main.h"


int main()
{
    int hours, minutes, result;
    int seconds, my_sec;

    int* arr = new int[3];
    char colon, time[10];
    TimeConverter my_time;
    cout << "Print your time: ";
    cin >> time;

    istringstream convert(time);
    convert >> hours >> colon >> minutes >> colon >> seconds;
    result = my_time.time_convert(hours, minutes, seconds);
    cout << "Time in seconds: " << result << "\n" << endl;
    cout << "Print your time in seconds: ";
    cin >> my_sec;
    arr = my_time.time_convert(my_sec, arr);
    cout << "Hours: " << arr[0] << "\n" << "Minutes: " << arr[1] << "\n" << "Seconds: " << arr[2] << endl;
}