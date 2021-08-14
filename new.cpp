#include <iostream>
using namespace std;

int main()
{   
    char str[20];
    int i=0;
    cout<<"insert"<<endl;
    // for(i=0;i<5;i++){
         cin.get(str,20);
    // }
  
    for(i=0;i<20;i++){
        cout.put(str[i]);
    }
    
    return 0;
}