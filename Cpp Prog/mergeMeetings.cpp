// Program to merge intervals of meetings if they are overlapping
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<pair<int, int> > meetingIntervals;
    vector<pair<int, int> > mergedIntervals;
    int start, end;
    meetingIntervals.push_back(make_pair(1, 3));
    meetingIntervals.push_back(make_pair(3, 6));
    meetingIntervals.push_back(make_pair(9, 10));
    meetingIntervals.push_back(make_pair(10, 13));
    meetingIntervals.push_back(make_pair(11, 12));
    sort(meetingIntervals.begin(), meetingIntervals.end()); // sorting
    for (int j = 0; j < meetingIntervals.size(); j++)
    {
        if (!mergedIntervals.size())
            mergedIntervals.push_back(make_pair(meetingIntervals[j].first, meetingIntervals[j].second));
        else
        {
            int top = mergedIntervals.size() - 1;
            if (mergedIntervals[top].second >= meetingIntervals[j].first)
            {
                mergedIntervals[top].second = meetingIntervals[j].second; // you can use swap here as well.
            }
            else
                mergedIntervals.push_back(meetingIntervals[j]);
        }
    }
    for (int j = 0; j < mergedIntervals.size(); j++)
    {
        cout << mergedIntervals[j].first << " - " << mergedIntervals[j].second << endl;
    }

    return 0;
}