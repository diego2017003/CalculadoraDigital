#include <iostream>
#include<fstream>
#include<cstdlib>
#include<string>
#include<sstream>
using namespace std;

int main()
{
  int nx,ny,nz,nx2,ny2,nz2;
  float r,g,b,a;
  ifstream fin;
  string s;

  fin.open("C:/Users/UFRNLAB/Desktop/alo.sculptor");
  if(!fin.is_open()){
    cout<<"iiiiiiiiiih";
  }
  while(fin.good()){
    stringstream ss;
    getline(fin,s);
    ss.str(s);
    ss>>s;
    cout<<s<<endl;
    if(s.compare("dim")== 0){
        ss>>nx>>ny>>nz;
        cout<<nx<<"X"<<ny<<"X"<<nz<<endl;
    }
    if(s.compare("putbox")== 0){
        ss>>nx>>nx2>>ny>>ny2>>nz>>nz2>>r>>g>>b>>a;
        cout<<"putbox"<<endl;
        cout<<nx<<"-"<<nx2<<"X"<<ny<<"-"<<ny2<<"X"<<nz<<"-"<<nz2<<endl;
    }
    if(s.compare("cutbox")== 0){
        ss>>nx>>nx2>>ny>>ny2>>nz>>nz2;
        cout<<"cutbox"<<endl;
        cout<<nx<<"-"<<nx2<<"X"<<ny<<"-"<<ny2<<"X"<<nz<<"-"<<nz2<<endl;
    }
  }

    return 0;
}
