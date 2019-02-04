/* Calculator The Game - Solution */

#include <cstdlib>
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <limits>
#include <numeric>
#include <stack>
#include <set>
#include <cmath>
#include <list>
#include <queue>
#include <algorithm>
#include <map>
#include <cstdio>
#include <ctime>
#include <windows.h> //Sleep(miliseconds) function

using namespace std;

void theGame();

void incorrectMessage();

void endMessage();

void menuMessage();

vector<string> StringToVectorString(string theString, char separator);

vector<int> StringToVectorInt(string theString, char separator);

vector<string> Calculate(vector<int> vecInt, vector<string> vecStr);

int CalculateVector(int initial, vector<string> vecStr);

void findAndReplaceAll(string & data, string toSearch, string replaceStr);


int main(){
  string optionStr;
  int option;
  bool next = true;

  while(next){
    menuMessage();

    getline(cin, optionStr);
    cout << "\n";

    try{
      option = stoi(optionStr);
    } catch(std::invalid_argument& e){
      incorrectMessage();
    }

    switch(option){
      case 1:
        theGame();
        break;
      case 2:
        endMessage();
        next = false;
        break;
      default:
        incorrectMessage();
        break;
    }
  }
  return 0;
}

void incorrectMessage(){
  cout << "+---------------------+\n";
  cout << "|  Incorrect answer!  |\n";
  cout << "+---------------------+\n";
  Sleep(2000);
}

void endMessage(){
  cout << "+--------------------+\n";
  cout << "|  Program is Over!  |\n";
  cout << "+--------------------+\n";
}

void menuMessage(){
  cout << "+------------------------------------------+\n";
  cout << "|  Option Menu:                            |\n";
  cout << "+------------------------------------------+\n";
  cout << "|  Start a new level .................. 1  |\n";
  cout << "|  Exit Program ....................... 2  |\n";
  cout << "+------------------------------------------+\n";
  cout << "\nWhat is your option? ";
}

void theGame(){
  vector<int> vecInput1;
  vector<string> vecInput2;
  string strInput;
  char separator = ' ';

  cout << "'Starting number' 'Goal' 'Moves'\n";
  getline(cin, strInput);
  vecInput1 = StringToVectorInt(strInput, separator);

  cout << "'buttons'\n";
  getline(cin, strInput);
  vecInput2 = StringToVectorString(strInput, separator);

  vector<string> vecFinal;
  vecFinal = Calculate(vecInput1, vecInput2);

  if(vecFinal[0] != "No result"){
    int sizeVecFinal = vecFinal.size();
    cout << "Sequence: | ";
    for(int i = 0; i < sizeVecFinal ; i++){
      cout << vecFinal[i] << " | ";
    }
    cout << "\n";
  }
  else{
    cout << "We didnt found any solution :(\n";
  }
}


vector<string> StringToVectorString(string theString, char separator){
  vector<string> vec;
  stringstream ss(theString);
  string str;
  while(getline(ss, str, separator)){
    vec.push_back(str);
  }
  return vec;
}

vector<int> StringToVectorInt(string theString, char separator){
  vector<int> vec;
  stringstream ss(theString);
  string str;
  while(getline(ss, str, separator)){
    vec.push_back(stoi(str));
  }
  return vec;
}

vector<string> Calculate(vector<int> vecInt, vector<string> vecStr){
  vector<string> hipot(vecInt[2]);
  int sizeVecStr = vecStr.size();
  int count = 0;

  if(vecInt[2] == 3){
    for(int i0 = 0; i0 < sizeVecStr ; i0++){
      hipot[0] = vecStr[i0];
      for(int i1 = 0; i1 < sizeVecStr ; i1++){
        hipot[1] = vecStr[i1];
        for(int i2 = 0; i2 < sizeVecStr ; i2++){
          hipot[2] = vecStr[i2];
          cout << count++ << " : " << CalculateVector(vecInt[0], hipot) << "\n";
          if(CalculateVector(vecInt[0], hipot) == vecInt[1])
            return hipot;
        }
      }
    }
  }

  if(vecInt[2] == 4){
    for(int i0 = 0; i0 < sizeVecStr ; i0++){
      hipot[0] = vecStr[i0];
      for(int i1 = 0; i1 < sizeVecStr ; i1++){
        hipot[1] = vecStr[i1];
        for(int i2 = 0; i2 < sizeVecStr ; i2++){
          hipot[2] = vecStr[i2];
          for(int i3 = 0; i3 < sizeVecStr ; i3++){
            hipot[3] = vecStr[i3];
            cout << count++ << " : " << CalculateVector(vecInt[0], hipot) << "\n";
            if(CalculateVector(vecInt[0], hipot) == vecInt[1])
              return hipot;
          }
        }
      }
    }
  }

  else if(vecInt[2] == 5){
    for(int i0 = 0; i0 < sizeVecStr ; i0++){
      hipot[0] = vecStr[i0];
      for(int i1 = 0; i1 < sizeVecStr ; i1++){
        hipot[1] = vecStr[i1];
        for(int i2 = 0; i2 < sizeVecStr ; i2++){
          hipot[2] = vecStr[i2];
          for(int i3 = 0; i3 < sizeVecStr ; i3++){
            hipot[3] = vecStr[i3];
            for(int i4 = 0; i4 < sizeVecStr ; i4++){
              hipot[4] = vecStr[i4];
              cout << count++ << " : " << CalculateVector(vecInt[0], hipot) << "\n";
              if(CalculateVector(vecInt[0], hipot) == vecInt[1])
                return hipot;
            }
          }
        }
      }
    }
  }

  else if(vecInt[2] == 6){
    for(int i0 = 0; i0 < sizeVecStr ; i0++){
      hipot[0] = vecStr[i0];
      for(int i1 = 0; i1 < sizeVecStr ; i1++){
        hipot[1] = vecStr[i1];
        for(int i2 = 0; i2 < sizeVecStr ; i2++){
          hipot[2] = vecStr[i2];
          for(int i3 = 0; i3 < sizeVecStr ; i3++){
            hipot[3] = vecStr[i3];
            for(int i4 = 0; i4 < sizeVecStr ; i4++){
              hipot[4] = vecStr[i4];
              for(int i5 = 0; i5 < sizeVecStr ; i5++){
                hipot[5] = vecStr[i5];
                cout << count++ << " : " << CalculateVector(vecInt[0], hipot) << "\n";
                if(CalculateVector(vecInt[0], hipot) == vecInt[1])
                  return hipot;
              }
            }
          }
        }
      }
    }
  }

  else if(vecInt[2] == 7){
    for(int i0 = 0; i0 < sizeVecStr ; i0++){
      hipot[0] = vecStr[i0];
      for(int i1 = 0; i1 < sizeVecStr ; i1++){
        hipot[1] = vecStr[i1];
        for(int i2 = 0; i2 < sizeVecStr ; i2++){
          hipot[2] = vecStr[i2];
          for(int i3 = 0; i3 < sizeVecStr ; i3++){
            hipot[3] = vecStr[i3];
            for(int i4 = 0; i4 < sizeVecStr ; i4++){
              hipot[4] = vecStr[i4];
              for(int i5 = 0; i5 < sizeVecStr ; i5++){
                hipot[5] = vecStr[i5];
                for(int i6 = 0; i6 < sizeVecStr ; i6++){
                  hipot[6] = vecStr[i6];
                  cout << count++ << " : " << CalculateVector(vecInt[0], hipot) << "\n";
                  if(CalculateVector(vecInt[0], hipot) == vecInt[1])
                    return hipot;
                }
              }
            }
          }
        }
      }
    }
  }

  else if(vecInt[2] == 8){
    for(int i0 = 0; i0 < sizeVecStr ; i0++){
      hipot[0] = vecStr[i0];
      for(int i1 = 0; i1 < sizeVecStr ; i1++){
        hipot[1] = vecStr[i1];
        for(int i2 = 0; i2 < sizeVecStr ; i2++){
          hipot[2] = vecStr[i2];
          for(int i3 = 0; i3 < sizeVecStr ; i3++){
            hipot[3] = vecStr[i3];
            for(int i4 = 0; i4 < sizeVecStr ; i4++){
              hipot[4] = vecStr[i4];
              for(int i5 = 0; i5 < sizeVecStr ; i5++){
                hipot[5] = vecStr[i5];
                for(int i6 = 0; i6 < sizeVecStr ; i6++){
                  hipot[6] = vecStr[i6];
                  for(int i7 = 0; i7 < sizeVecStr ; i7++){
                    hipot[7] = vecStr[i7];
                    cout << count++ << " : " << CalculateVector(vecInt[0], hipot) << "\n";
                    if(CalculateVector(vecInt[0], hipot) == vecInt[1])
                      return hipot;
                  }
                }
              }
            }
          }
        }
      }
    }
  }

  hipot[0] = "No result";
  return hipot;
}

int CalculateVector(int initial, vector<string> vecStr){
  int res = initial;
  int sizeVecStr = vecStr.size();

  for(int i = 0; i < sizeVecStr; i++){
    string s = vecStr[i];
    if(res == -9999999)
      break;
    else if(vecStr[i] == "+-"){
      res *= -1;
    }
    else if(vecStr[i][0] == '+'){
      s = s.substr(1, s.length());
      res += stoi(s);
    }
    else if(vecStr[i][0] == '-'){
      s = s.substr(1, s.length());
      res -= stoi(s);
    }
    else if(vecStr[i][0] == 'x'){
      s = s.substr(1, s.length());
      res *= stoi(s);
    }
    else if(vecStr[i][0] == '/'){
      s = s.substr(1, s.length());
      double dRes = res*1.0;
      dRes /= stoi(s);
      res /= stoi(s);

      double dRes1 = res*1.0;
      if(dRes1 != dRes){
        res = -9999999;
      }
    }
    else if(vecStr[i][0] == 'R'){
      s = to_string(res);
      reverse(s.begin(), s.end());
      res = stoi(s);
    }
    else if(vecStr[i][0] == 'M'){
      s = to_string(res);
      string s1 = s;
      reverse(s1.begin(), s1.end());
      s += s1;

      if(s.length()>6)
        res = -9999999;
      else
        res = stoi(s);
    }
    else if(vecStr[i].find('=') != string::npos){
      s = to_string(res);
      vector<string> vec = StringToVectorString(vecStr[i], '=');
      findAndReplaceAll(s, vec[0], vec[1]);
      res = stoi(s);
    }
    else if(vecStr[i][0] == '<'){
      s = to_string(res);
      s.pop_back();
      if(s.length() > 0 && s[0] != '-'){
        res = stoi(s);
      }
      else{
        res = 0;
      }
    }
    else if(vecStr[i][0] == 'S'){
      s = to_string(res);
      int res1 = 0;
      int flag = 0;
      if(s[0] == '-')
        flag=1;

      int resSize = s.length();
      for(int i = 0; i < resSize; i++)
        if(s[i] != '-')
          res1 += (int)s[i]-48;

      if(flag == 0)
        res = res1;
      else
        res = res1*-1;
    }
    else if(vecStr[i][0] == '^'){
      s = s.substr(1, s.length());
      res = pow(res, stoi(s));
    }
    else if(vecStr[i] == "sr"){
      s = to_string(res);
      s = s.substr(s.length()-1, s.length()) + s.substr(0, s.length()-1);
      res = stoi(s);
    }
    else if(vecStr[i] == "sl"){
      s = to_string(res);
      s = s.substr(1, s.length()) + s.substr(0, 1);
      res = stoi(s);
    }
    else if(vecStr[i][0] == '['){ //char instead of string, maybe
      string s1 = s.substr(3, s.length());
      int x = stoi(s1);
      if(vecStr[i][1] == '+'){
        for(int j = i+1; j < vecStr.size(); j++){
          s1 = vecStr[j];
          if(vecStr[j][0] == '+'){
            s1 = s1.substr(1, s1.length());
            int x1 = stoi(s1);
            x1 += x;
            vecStr[j] = "+" + to_string(x1);
          }
          else if(vecStr[j][0] == '-'){
            s1 = s1.substr(1, s1.length());
            int x1 = stoi(s1);
            x1 += x;
            vecStr[j] = "-" + to_string(x1);
          }
          else if(vecStr[j][0] == 'x'){
            s1 = s1.substr(1, s1.length());
            int x1 = stoi(s1);
            x1 += x;
            vecStr[j] = "x" + to_string(x1);
          }
          else if(vecStr[j][0] == '/'){

          }
          else if((int)vecStr[j][0] >= 48 && (int)vecStr[j][0] <= 57){
            int x1 = stoi(s1);
            x1 += x;
            vecStr[j] = to_string(x1);
          }
        }
      }
    }

    else{//o caso em que eu tenho de acrescentar um numero, exemplo 1.
      s = to_string(res);
      s += vecStr[i];
      if(s.length()>6){
        res = -9999999;
      }
      else{
        res = stoi(s);
      }
    }
  }

  return res;
}

void findAndReplaceAll(string & data, string toSearch, string replaceStr){
	size_t pos = data.find(toSearch);

	while(pos != string::npos){
		data.replace(pos, toSearch.size(), replaceStr);
		pos = data.find(toSearch, pos + toSearch.size() - replaceStr.size());
	}
}
