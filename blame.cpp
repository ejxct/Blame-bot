#include <iostream>
#include <string>

int main(){
    int in;
    std::string answer;
    std::cin>>in;
    std::string blameStrings[] = {
        "\u180E", "\u200B", "\u200C", "\u200D", "\u2060", "\u2063", "\uFEFF"
    };
    while (in != 0) {
        answer.insert(0,blameStrings[(in % 7)]);
        in /= 7;
    }
    std::cout<<"!!/blame\u180E "<<answer<<"a\n";
}
