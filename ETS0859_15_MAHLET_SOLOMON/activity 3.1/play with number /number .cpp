#include <iostream>

using namespace std;
#include<cmath>

int main()
{
    int n;
    cout<<"enter number: "<<endl;
    cin>>n;
    char menu;
    cout<<" Enter A to print the reverse of the number "<<endl
        <<" Enter B to print number of digits of the number "<<endl
        <<" Enter C to print the sum of dogits of the number "<<endl
        <<" Enter D to print product even digits of the number "<<endl
        <<" Enter E to print the first and the last digit of number and display their sum "<<endl
        <<" Enter F to print the number with swapped first and last digit "<<endl
        <<" Enter G to check the number is palindrome or not  "<<endl
        <<" Enter H to print the frequency of each digit in talble form "<<endl
        <<" Enter I to check the number is arm strong or not "<<endl
        <<" Enter J to check the  number is strong or not "<<endl
        <<" Enter K to check the number is perfect or not "<<endl;
    cin>>menu;
    if(menu=='A'){
       int revers = 0;
       while (n>0){
        int digit = (n%10);
        revers = (revers * 10) + digit;
        n= (n)/(10);}
      cout<<"the reverse of the entered number is : "<<revers<<endl;}
    else if(menu=='B'){
        int i=0;
        while(n>0){
        i=i+1;
        n = (n)/(10);}
        cout<<"the entered number has "<<i<<" digits";}
    else if(menu=='C'){
        int sum=0;
        while(n>0){
        int digit =n%10;
        sum= sum+digit;
        n= (n) / (10);}
        cout<<"the sum of number is: "<<sum;}
    else if(menu=='D'){
        int product=1;
        while(n>0){
        int digit =n%10;
           if(n%2==0){
        product=product*digit;}
        n = (n) / (10);}
        cout<<"the product of number is: "<<product;}
    else if(menu=='E'){
        int lastdigit=n%10;
        int firstdigit=0;
        while(n!=0){
            firstdigit=n%10;
            n/=10;}
            cout<<"first digit is: "<<firstdigit<<endl;
             cout<<"last digit is: "<<lastdigit<<endl;
             cout<<"their sum is: "<<firstdigit+lastdigit;}
    else if(menu=='F'){
        int originalNum, firstDigit, lastDigit, temp, numDigits = 0;
        originalNum = n;
        while (originalNum != 0){
        originalNum /= 10;
        numDigits++;}
        lastDigit = n % 10;
        firstDigit = n / pow(10, numDigits - 1);
        // Swap the first and last digits
        temp = firstDigit;
        firstDigit = lastDigit;
        lastDigit = temp;
        int result = lastDigit * pow(10, numDigits - 1) + n % (int)pow(10, numDigits - 1);
        result /= 10;
        result += firstDigit * pow(10, numDigits - 1);
        cout << "Number with swapped first and last digit: " << result << endl;}
    else if(menu=='G'){
        int originalNumber, reverseNumber = 0, remainder;
         originalNumber = n;
         while (n!= 0) {
        remainder = n% 10;
        reverseNumber = reverseNumber * 10 + remainder;
        n/= 10;}
        if (originalNumber == reverseNumber) {
        cout << originalNumber << " is a palindrome." << endl;}
         else {
        cout << originalNumber << " is not a palindrome." << endl;}}
  else if(menu=='H'){
        int frequency[10] = {0};
        while (n!= 0){
        int digit = n% 10;
        frequency[digit]++;
        n/= 10;}
        cout << "Digit   Frequency" << endl;
        for (int i = 0; i < 10; i++){
         if (frequency[i] > 0) {
            cout << "  " << i << "         " << frequency[i] << endl;}}}
    else if(menu=='I'){
        int originalNumber, remainder, result = 0, i = 0;
        originalNumber = n;
        while (originalNumber != 0) {
        originalNumber /= 10;
        i++;}
       originalNumber = n;
       while (originalNumber != 0) {
        remainder = originalNumber % 10;
        result += pow(remainder, i);
        originalNumber /= 10;}
        if (result == n){
        cout << n << " is an Armstrong number." << endl;}
        else {
        cout << n << " is not an Armstrong number." << endl;}}
    else if(menu=='J'){
        int sum=0,digit,onum;
         while(num!=0){
       digit=num%10;
       int factorial=1;
       for(int i=1;i<=digit;++i){
        factorial*=i;}
       sum+=factorial;
       num/=10;}
       if(sum==onum){
        cout<<"strong number"<<endl;}
        else{
        cout<<"not strong number"<<endl;}
    else if(menu=='K'){
        int sum = 0;
        for (int i = 1; i <= n / 2; i++) {
        if (n% i == 0) {
            sum += i;}}
        if (sum == n && n != 0) {
        cout << n << " is a perfect number." << endl;}
         else {
        cout << n << " is not a perfect number." << endl;}}



    return 0;
}
