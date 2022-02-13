/**
 * Name : Muhammad Nurhaziq bin Mohd Zamani
 * Hackerrank
 * Function Description: 
 * Complete the plusMinus function in the editor below.
 * plusMinus has the following parameter(s):
 * int arr[n]: an array of integers
 * 
 * Input Format:
 * The first line contains an integer, , the size of the array.
 * The second line contains n space-separated integers that describe arr[n].
 * 
 * Output Format:
 * Print the following  lines, each to  decimals:
 * 1. proportion of positive values
 * 2. proportion of negative values
 * 3. proportion of zeros
 **/
  
#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'plusMinus' function below.
 *
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

void plusMinus(vector<int> arr) {
    int total[3] = {0};
    for(int i = 0; i < arr.size();i++) {
        if(arr[i] > 0) {
            total[0]++;
        }else if(arr[i] < 0) {
            total[1]++;
        }else {
            total[2]++;
        }
    } 
    
    // index 0 - +ve; index 1 - -ve; index 2 - 0
    cout << setprecision(5);
    cout << ((double)total[0]/arr.size())<<endl;
    cout << ((double)total[1]/arr.size())<<endl;
    cout << ((double)total[2]/arr.size())<<endl;
        
}

int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split(rtrim(arr_temp_temp));

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    plusMinus(arr);

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
