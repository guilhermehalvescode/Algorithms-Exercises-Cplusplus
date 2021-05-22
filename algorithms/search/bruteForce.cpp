#include <bits/stdc++.h>


using namespace std;


int bruteForce(string text, string substring){
    int textLenght = text.length();
    int substringLenght = substring.length();
    for(int i = 0; i < textLenght - substringLenght; i++){
        int j;
        for(j = 0; j < substringLenght; j++){
            if(text.at(i + j) != substring.at(j))
                break;
        }
        if(j == substringLenght)
            return i;
    }
    return textLenght;
}

//bruteForce subString search algorithm