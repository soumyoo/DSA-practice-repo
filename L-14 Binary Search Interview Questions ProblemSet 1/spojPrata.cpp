#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isPossible(vector<int> &arr,int L,int P, int mid){
    int prataNum=0;
    for (int i = 0; i < L; i++)
    {
        int rank=arr[i];
        int time=0;
        int k=1;

        while(time+(k*rank)<=mid)
        {
            prataNum++;
            time+=k*rank;
            k++;
            if (prataNum>=P)
            {
                return true;
            }
            

        }
        
    }

    return false;
    
}


int minTimeToCookPratas(int P, vector<int> &arr,int L) {
    int start = 0;
    int end=0;

    for (int i = 1; i <= P; i++)
    {
       end+=(arr[L-1]*i);
    }
    

    int ans=-1;

    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (isPossible(arr,L, P, mid)) {
            ans = mid;
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    return ans;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int P, L;
        cin >> P >> L;

        vector<int> arr(L);
        for (int i = 0; i < L; ++i) {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());

        cout << minTimeToCookPratas(P, arr,L) << endl;
    }

    return 0;
}