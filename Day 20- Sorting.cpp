#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
    	cin >> a[a_i];
    }
    // Write Your Code Here
    int numSwaps=0, firstElement, lastElement;
    int currSwaps;
    for (int i=0; i<n; i++)
    {
        currSwaps=0;
        for (int j=0; j<n-1; j++)
        {
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
                currSwaps++;
            }
        }
        numSwaps+=currSwaps;
        if (currSwaps==0)
            break;
    }
    firstElement = a[0];
    lastElement = a[n-1];
    
    cout<<"Array is sorted in "<<numSwaps<<" swaps.\n";
    cout<<"First Element: "<<firstElement<<"\n";
    cout<<"Last Element: "<<lastElement<<"\n";
    return 0;
}
