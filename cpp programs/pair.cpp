#include<iostream>
#include<stdio.h>
#include <unordered_map>
/*
    unordered_map <key type, value type> name;
    Eg: unordered_map<string, int> testMap
    {
        {key1, 1},
        {key2, 2},
        {key3, 3}
    }
*/
# define LEN(arr) sizeof(arr)/sizeof(arr[0]);

using namespace std;
int main () { 
    unordered_map<int,int> umap;
    int arr [] = {10, 10, 20, 20, 2, 2, 3, 3};
    int len = LEN(arr);
    int pairCount = 0;
    // cout<<"zero"<<umap[0];
    for (int i=0; i<len; i++) {
            umap[arr[i]] ? umap[arr[i]]++ : umap[arr[i]] = 1;
    }
    cout<<"umap ki length"<<umap.size();
    for (int i=0; i<umap.size(); i++) {
            cout<<umap[arr[i]]<<endl;
            if(umap[arr[i]]%2 == 0) {
                pairCount++;
            }
    }
    cout<<pairCount<<endl;
    return 0;
}