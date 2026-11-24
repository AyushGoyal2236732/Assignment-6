#include<iostream>
using namespace std;


    // int squares(int n){

    //     return n*n;
    // }

    // int area(int r){

    //     return 3.14*r*r;
    // }

    // int circumference(int r){


    //         return 2*3.14*r;
    // }

        // string voting(int age){

        //     if(age > 18){
        //         return "yes";
        //     }

        //     else {
        //         return "no";
        //     }




        // }

        // bool oddnumbers(int n){
        //     return n % 2 != 0;
        // }

         bool isPrime(int n){
         int cnt = 0;
         for(int i=1; i*i<=n; i++){
            if(n%i == 0){
                cnt++;
                if((n/i) != i){
                    cnt++;
                }
            }
         }

         if(cnt == 2) return true;
         else return false;   



        }


int main(){


        // int n;
        // cin >> n;

        // int age;
        // cin >> age;

        // int r;
        // cin >> r;

        // for(int i=1; i<=n; i++){

        //     cout << squares(i)<< " ";


        // }


        // cout << area(r);

        // cout << circumference(r);



        // cout << voting(age);




        // Print all the odd numbers
        
        int a,b;
        cin >> a >> b;
    //     for(int i=a; i<=b; i++){
    //         if( oddnumbers(i)) {
    //             cout << i <<  " ";           
    //     }

    // }

    for(int i=a; i<=b; i++){
       if( isPrime(i) ) {
        cout << i << " ";
       } 
    }

        return 0;




}