
#include <iostream>
using namespace std;
int main(int argc,char *argv[]){
    if (argc==1){
    cout << "Please input numbers to find average."<< endl;
    }else {
    double sum = 0;
    for (int i = 1 ; i < argc;i++){
       float  x = atof(argv[i]);
       sum += x;
    }
    cout <<"---------------------------------"<<endl;
    cout << "Average of "<<argc -1<<" numbers = "<<sum/(argc-1)<<endl;
    cout <<"---------------------------------";
}
}