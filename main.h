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
    int time_convert(int hrs, int min, int sec)
    {
        int res;
        res = min_to_sec * min + hrs_to_sec * hrs + sec;
        return res;
    }
    int* time_convert(int my_sec, int* arr)
    {
        int hrs = my_sec / 3600;
        int min = (my_sec % 3600) / 60;
        int seconds = (my_sec % 3600) % 60;
        arr[0] = hrs;
        arr[1] = min;
        arr[2] = seconds;
        return arr;
    }

};

