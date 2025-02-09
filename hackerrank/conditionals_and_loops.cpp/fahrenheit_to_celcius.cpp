// Given three values - Start Fahrenheit Value (S), End Fahrenheit value (E) and Step Size (W), you need to convert all Fahrenheit values from Start to End at the gap of W, into their corresponding Celsius values and print the table.
// Input Format :
// 3 integers - S, E and W respectively 
// Output Format :
// Fahrenheit to Celsius conversion table. One line for every Fahrenheit and corresponding Celsius value. On Fahrenheit value and its corresponding Celsius value should be separate by tab ("\t")
// Constraints :
// 0 <= S <= 80
// S <= E <=  900
// 0 <= W <= 40 
// Sample Input 1:
// 0 
// 100 
// 20
// Sample Output 1:
// 0   -17
// 20  -6
// 40  4
// 60  15
// 80  26
// 100 37

#include<iostream>
using namespace std;


int main(){

      int S,E,W;
      cin>>S>>E>>W;
      int fahr,cels;
      fahr=S;
      
      while(fahr<=E){
            cels=(fahr-32.0)*5.0/9;
            cout<<fahr<<" "<<cels<<endl;
            fahr=fahr+W;
      }
}
