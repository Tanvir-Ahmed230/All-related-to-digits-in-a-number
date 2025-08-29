# All-related-to-digits-in-a-number
Number of digits,sum of the digits,reverse of the number,palindrome?,armstrong?,strong?
#include <iostream>
#include<math.h>
using namespace std;

int main() {
int number,i,sum=0,count=0,result=0,reverse=0,original,remainder;
cout<<"Enter any number : ";
cin>>number;
original=number;
while(original!=0){
    original/10;
    count++;
    original=original/10;
}
cout<<"Number of digits in the number : "<<count<<endl;

original=number;
while(original!=0){
remainder=original%10;
sum=sum+remainder;
original=original/10;
}
cout<<"Sum of the digits = "<<sum<<endl;

original=number;
while(original!=0){
remainder=original%10;
reverse=reverse*10+remainder;
original=original/10;
}
cout<<"Reverse of the number  = "<<reverse<<endl;
if(number == reverse){
    cout<<"It's a palindrome number 🥳!"<<endl;
}
else{
    cout<<"Sorry! It's not a Palindrome 🙂"<<endl;
}


original=number;//Armstrong 
while(original!=0){
    remainder=original%10;
    result=result+pow(remainder,count);
    original=original/10;
    }
    if(number==result){
        cout<<"It's Armstrong."<<endl;
    }
    else{
        cout<<"It's not Armstrong."<<endl;
    }
    original=number;
while(original!=0){
    remainder=original%10;
   int fact=1;
    for(i=1;i<=remainder;i++){
        fact=fact*i;
    }
    sum=sum+fact;
    original =original/10;
}
cout<<"Sum = "<<sum<<endl;
if(number==sum){
    cout<<"It's a strong number.";
}
else{
    cout<<"It's not a strong number.";
}

    return 0;
}
