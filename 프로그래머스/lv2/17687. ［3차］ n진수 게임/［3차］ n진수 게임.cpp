#include <string>
#include <vector>

using namespace std;
int AddNext(vector<char>& v, int i, int n);
char Modulo(int i, int n);

string solution(int n, int t, int m, int p) {
    string answer = "";
    int counter = 0;
    
    vector<char> sequence;
    int idx = 0;
    while(counter <= t * m){
        int added = AddNext(sequence, idx, n);
        counter += added;
        idx++;
    }
    
    for(int i = 0; i < t; i++){
        char c = sequence.at((i * m) + (p - 1));
        string str(1,c);
        answer += str;
    }
    
    return answer;
}

int AddNext(vector<char>& v, int i, int n){
    int retVal = 0;
    string temp = "";
    if(i == 0)
        temp = "0";
    while(i > 0){
        char res = Modulo(i,n);
        i = i / n;
        string str(1,res);
        temp = res + temp;
    }
    for(char c : temp)
        v.emplace_back(c);
    retVal = temp.length();
    return retVal;
}

char Modulo(int i, int n){
    char retVal = '\0';
    if (i % n < 10){
        retVal = '0' + (i % n);
    }
    else if ( i % n == 10){
        retVal = 'A';
    }
    else if ( i % n == 11){
        retVal = 'B';
    }
    else if ( i % n == 12){
        retVal = 'C';
    }
    else if ( i % n == 13){
        retVal = 'D';
    }
    else if ( i % n == 14){
        retVal = 'E';
    }
    else if ( i % n == 15){
        retVal = 'F';
    }
    return retVal;
}