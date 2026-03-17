#include <iostream>
using namespace std ; 
int main (){

       int n =4 ; // sizze of pattern 
       int num = 1 ; 

       for (int i =0 ;i <n ;i++){  // rows
        for (int j=0 ; j<n; j++){  // columns 
            cout << num <<" ";  // print number
            num ++ ;

        }

         cout << endl;  // new line after each row

       }

       return 0 ;
}


#include <iostream>
using namespace std ; 
int main (){

       int n =4 ; // sizze of pattern 
          

       for (int i =0 ;i <n ;i++){  // rows
        char ch = 'A' + i ;  // start with 'A' and increment for each row
        for (int j=0 ; j<n; j++){  // columns 
            cout << ch <<" ";  // print number
            ch ++ ; 

        }

         cout << endl;  // new line after each row 

       }

       return 0 ;
}
