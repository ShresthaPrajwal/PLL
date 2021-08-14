#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

int main(){
    char srg[20];
    char code[4];
    int i,j;
    //writing to file
    ofstream fin;
    fin.open("ctx.txt",ios::app);
    for(i=0;i<3;i++){
    cout<<"Input Your name = ";
    cin.getline(srg,20);
    fin.write(srg,strlen(srg));
    fin.put('\n');//This is also put in stream so next "code" stores only 3 inputs
    cout<<endl<<"Your id = ";
    cin.getline(code,4);
    fin.write(code,strlen(code));
    fin.put('\n');
    }
    fin.close();


    // //reading from file
     ifstream fout;
    fout.open("ctx.txt");
    cout<<"The Data are"<<endl;
    // for(i=0;i<3;i++){
    // fout.getline(srg,20);
    // cout<<srg<<endl;
    // fout.getline(srg,20);
    // cout<<srg<<endl;
    // }
    cout<<"\t"<<"Name"<<"\t"<<"Id"<<endl;
    while(fout){
    fout.getline(srg,20);
    fout.getline(code,20);
    cout<<"\t"<<srg<<"\t"<<code<<endl;
    }
    fout.close();
    return 0;
    }