#include <iostream>

using namespace std;
/*
how command line arguments are passed to main() in C and C++
*/
int main(int argc,char** argv){
      cout<<"Have "<<argc<<" arguments:"<<endl;
      for(int i=0;i<argc;++i)
         cout<<argv[i]<<endl;
      return 1;
}
