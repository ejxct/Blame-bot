#include <iostream>

int main(){
    int digit;
    std::string stringDigit, answer, instring;
    std::cin>>instring;
    int in = std::stoi(instring,nullptr);
    while (in != 0){
        digit = in % 7;
        if (digit < 10){
            stringDigit = '0' + digit;
        }else{
            stringDigit = digit - 10 + 'A';
        }
        answer = stringDigit + answer;
        in /= 7;
    }
    std::cout<<"!!/blame\u180E ";
    int i = 0;
    while(answer.length()>=i){
        switch (answer[i]-'0'){
            case 0: std::cout<<"\u180E";
                break;
            case 1: std::cout<<"\u200B";
                break;
            case 2: std::cout<<"\u200C";
                break;
            case 3: std::cout<<"\u200D";
                break;
            case 4: std::cout<<"\u2060";
                break;
            case 5: std::cout<<"\u2063";
                break;
            case 6: std::cout<<"\uFEFF";
                break;
        }
        i++;
    }
    std::cout<<"a\n";
}
