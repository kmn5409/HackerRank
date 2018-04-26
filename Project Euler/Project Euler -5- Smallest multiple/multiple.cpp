#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        long long num=1,temp=n;
        while(num<=n){
            while(temp%num == 0 && num<=n)
                num++;
            if(num>n)
                break;
            else{
                num=1;
                temp++;
            }
                
            
        }
        cout << temp << endl;
    }
    return 0;
}
