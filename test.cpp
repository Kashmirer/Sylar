#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <ctime>
#include <algorithm>
#include <sstream>
#include <stack>
#include<numeric>
#include <cassert>
#include <stdio.h>
using namespace std;

int main(){
    int a[]={1,1,34,77,90,11,2,4,5,55};
    sort(a+1,a+10);
    for(int i=0;i<10;i++)
    cout<<a[i]<<" ";
    return 0;
}