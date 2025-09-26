// IF ELSE STATEMENT

//

// #include<iostream> 
// using namespace std;
// int main() {
//     int age;
//     cout<<"enter your age : ";
//     cin>>age;
//      if(age>=18 ){
//         cout<<"you can vote\n";
//      }else{
//         cout<<"you cannot vote\n";
//         return 0;
//      }
// }

// #include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cout<<"enter n : ";
//     cin>> n;
//     if(n%2==0){
//         cout<<"n is even number"<<endl;
//     }else{
//         cout<<" n is odd number"<<endl;
//         return 0;
//     }
// }


// IF - ELSE IF - ELSE


#include<iostream>
using namespace std;
int main() {
    int marks;
    cout<<"enter your marks : ";
    cin>> marks;

    if(marks>= 90){
        cout<<"grade A\n";
    }else if(marks>=70 && marks<90){
        cout<<"grade B\n";
    }else{
        cout<<"grade C\n";
        return 0;
    }
    
}