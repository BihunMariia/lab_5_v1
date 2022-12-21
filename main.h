#pragma once
#include <iostream>
#include <string>
#include <sstream>
using namespace std;


class TimeConverter
{
private:
    int min_to_sec = 60;
    int hrs_to_sec = 3600;
public:
    int time_convert(int hours, int minutes, int seconds)
    {
        int result;
        result = min_to_sec * minutes + hrs_to_sec * hours + seconds;
        return result;
    }
    int* time_convert(int my_sec, int* arr)
    {
        int hours = my_sec / 3600;
        int minutes = (my_sec % 3600) / 60;
        int seconds = (my_sec % 3600) % 60;
        arr[0] = hours;
        arr[1] = minutes;
        arr[2] = seconds;
        return arr;
    }

};

