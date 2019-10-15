#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the hackerlandRadioTransmitters function below.
int hackerlandRadioTransmitters(vector<int> x, int k) {

     long  int count1=0;
    
    sort(x.begin(),x.end());
    
   long int next=0;
   long int j=0;
   long int c1=0;
      for(int i=0; ; i++)
      {
         long int n1=j;
          next=x[j]+k;
          
          cout<<"n1= "<<n1<<" "<<next<<endl;
         long int i1;
          for(i1=n1; ; i1++)
          {
              if(x[i1]<=next)
              {  
                  c1++;
               
              }
              else
                  break;
              
          }
          
          cout<<i1<<" "<<c1<<endl;
          
          int next1=x[i1-1]+k;
          cout<<next1<<endl;
          
          int k1;
          for( k1=i1; ; k1++)
          {
              
              if(x[k1]<=next1)
              {
                  c1++;
              }
              else
                  break;
              
              
          }
          
           cout<<k1<<"  2.. "<<c1<<endl<<endl;
          
          j=k1;
          
          
           count1++;
          if(c1>=(x.size()))
              break;
          
          
          
         
          
          
          
      }
        
    
    return count1;
    
    
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string nk_temp;
    getline(cin, nk_temp);

    vector<string> nk = split_string(nk_temp);

    int n = stoi(nk[0]);

    int k = stoi(nk[1]);

    string x_temp_temp;
    getline(cin, x_temp_temp);

    vector<string> x_temp = split_string(x_temp_temp);

    vector<int> x(n);

    for (int i = 0; i < n; i++) {
        int x_item = stoi(x_temp[i]);

        x[i] = x_item;
    }

    int result = hackerlandRadioTransmitters(x, k);

    fout << result << "\n";

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
