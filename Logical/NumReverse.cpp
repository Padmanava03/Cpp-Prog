#include <iostream>
using namespace std;

int main(){
    int n, reverse = 0;
    cout<<"Enter a number = ";
    cin>>n;
    int temp = n;
    while(temp>0){
        reverse = reverse*10 + temp%10;
        temp = temp/10;
    }
    cout<<"Reverse of "<<n<<" = "<<reverse<<endl;
    return 0;
}