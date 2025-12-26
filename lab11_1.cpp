#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

int main(){
    srand(time(0));
    cout << "Press Enter 3 times to reveal your future." << endl;
    cin.get();
    cin.get();
    cin.get();
    int n = rand()%9;
    string grade;
    if(n==0){
        grade = "A";
    }else if(n==1){
        grade = "B+";
    }else if(n==2){
        grade = "B";
    }else if(n==3){
        grade = "C+";
    }else if(n==4){
        grade = "C";
    }else if(n==5){
        grade = "D+";
    }else if(n==6){
        grade = "D";
    }else if(n==7){
        grade = "F";
    }else{
        grade = "W";
    }
    cout << "You will get " << grade << " in this 261102.";
}