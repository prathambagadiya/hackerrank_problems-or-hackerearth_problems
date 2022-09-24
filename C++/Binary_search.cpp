#include <iostream>
using namespace std;  
int main(){  
    int a,arr[1000],lower,mid,upper,n;  
    cout<<"Enter the size of the array: "<<endl;  
    cin>>n;
    cout<<"Enter the elements in the sorted order "<<endl;
    for (int i=0;i<n;i++){  
        cout<<"arr [" << i << "]= ";  
        cin>>arr[i];  
    }
    lower=0;  
    upper=n-1;
    cout<<"Enter the element to be searched from sorted array: "<<endl;  
    cin>>a;    
    while(lower<=upper){  
        mid=(lower+upper)/2;  
        if(arr[mid]==a){  
            cout<<"Element is found at the index: "<< (mid+1)<<endl;  
            return 0;
        }
        else if(a>arr[mid]){  
            lower=mid+1;
        }
        else{  
            upper=mid-1;
        }  
    }  
    cout << " Number is not found. " << endl;  
    return 0;  
}
