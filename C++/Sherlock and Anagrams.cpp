#include <bits/stdc++.h>

using namespace std;

// Complete the sherlockAndAnagrams function below.
int sherlockAndAnagrams(string s) {
    
    
    int count1=0;
    
    for(int j=0; j<s.length()-1; j++)
    {
    for(int i=1; i<s.length(); i++)
    {
        string s1=s.substr(j,i);
      //  string str2=s1;
        
       
        
       // reverse(str2.begin(), str2.end());
        

           string str1=s.substr(j+1,s.length());
        
          if(str1.length()<s1.length())
              break;
        
         cout<<s1<<" "<<" "<<str1<<endl;
        
        int c1=0;
        
        int len=s1.length();
        
        sort(s1.begin(),s1.end());
        
        for(int k=0; k<str1.length()-len+1; k++)
        {
            
            string t1=str1.substr(k,len);
            
            cout<<t1<<" ";
           // sort(t1,t1+len);
                    sort(t1.begin(),t1.end());
            
            if(t1==s1)
            {    count1++;
              // break;
            }
            
            
            
        }
           
        
            cout<<endl;
   
    }
    }
    
return count1;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        int result = sherlockAndAnagrams(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
