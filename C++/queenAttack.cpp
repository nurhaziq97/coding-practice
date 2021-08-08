#include <iostream>
#include <vector>
/*
* Complete the 'queensAttack' function below.
*
* The function is expected to return an INTEGER.
* The function accepts following parameters:
*  1. INTEGER n
*  2. INTEGER k
*  3. INTEGER r_q
*  4. INTEGER c_q
*  5. 2D_INTEGER_ARRAY obstacles
*/

// n - checkboard size
// k - obstacle number
// r_q - row position of queen
// c_q - column position of queen

// a few input >> 4 - compulsory input

int solution(int n, int k, int r_q, int c_q, std::vector<std::vector<int>> obstacles) {
  // std::vector<std::vector<int>> board (n, std::vector<int> (n));
  // availableStep =  
  
  return 0;
}

int main()
{
  int n = 0, k = 0, r_q = 0, c_q;
  std::vector<std::vector<int>> obstacle;
  std::cin >>n >> k >> r_q >> c_q;
  if (k > 0)
  {
    int  x = 0, y=0;
    for (int i = 0; i < k; i++) {
      std::cin >> x >> y;
      std::vector<int> row;
      row.push_back(x);
      row.push_back(y);
      obstacle.push_back(row);
    }
  }

  solution(n,k,r_q,c_q,obstacle);
  return 0;

}