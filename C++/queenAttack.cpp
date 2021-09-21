#include <iostream>
#include <vector>

// LOGIC ERROR WHEN SEARCHING FOR AVAILABLE SPACE

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

std::vector<std::vector<int>> findAvailable(int n, int r_q, int c_q) {

  std::vector<std::vector<int>> availableSpace;

  std::cout << "\nRow & Column";
  for(int i=0; i < n; i++) {
    std::cout<<".";
    std::vector<int> pos;
    // one column
    if(i == c_q) {
      pos.push_back(c_q);
      pos.push_back(i);
      std::cout << "Input for column " << i+1<< "(" << c_q << "," << i << ")"<< std::endl;
      availableSpace.push_back(pos);
    }
    // one row
    if(i==r_q) {
      pos.push_back(i);
      pos.push_back(r_q);
      std::cout << "Input for row " << i+1<< "(" << i << ","<< r_q << ")" << std::endl;
      availableSpace.push_back(pos);
    }
  }
  /*
  * diagonal right above
  * starting point[queen] -1 -1 until one of row@col reach 0
  */
  int sF = 0;
  int current_row = r_q;
  int current_col = c_q;
  std::cout<<"\nDiagonal Right Above";
  while(current_row-1>=0 && current_col-1>=0) {
    std::cout<<".";
    std::vector<int> pos;
    current_row = r_q-1;
    current_col = c_q-1;
    pos.push_back(current_row);
    pos.push_back(current_col);

    availableSpace.push_back(pos);
    sF++;
    if(sF>20) break;
  }

  /* diagonal right btm
  * starting point[queen] +1 +1 until one of row@col reach n
  */
  sF = 0;
  current_col = c_q;
  current_row = r_q;
  std::cout<<"\nDiagonal Right Btm";
  while(current_row+1>n && current_col+1>n) {
    std::cout<<".";
    std::vector<int> pos;
    current_row = r_q+1;
    current_col = c_q+1;
    pos.push_back(current_row);
    pos.push_back(current_col);

    availableSpace.push_back(pos);
    sF++;
    if(sF>20) break;
  }

  sF = 0;
  current_col = c_q;
  current_row = r_q;
  //diagonal left above
  std::cout<<"\nDiagonal Left Above";
  while(current_row-1>=0 && current_col+1<n) {
    std::cout<<".";
    std::vector<int> pos;
    current_row = r_q-1;
    current_col = c_q+1;
    pos.push_back(current_row);
    pos.push_back(current_col);

    availableSpace.push_back(pos);
    sF++;
    if(sF>20) break;
  }

  sF = 0;
  current_col = c_q;
  current_row = r_q;
  //diagonal left btm
  std::cout<<"\nDiagonal Left Btm";
  while(current_row+1>n && current_col-1<=0) {
    std::cout<<".";
    std::vector<int> pos;
    current_row = r_q+1;
    current_col = c_q-1;
    pos.push_back(current_row);
    pos.push_back(current_col);

    availableSpace.push_back(pos);
    sF++;
    if(sF>20) break;
  }
  std::cout << "\n";
  for(int i=0;i<availableSpace.size();i++) {
    std::cout<<"position at each row: {" << availableSpace[i][0] << "," << availableSpace[i][1] << "}\n";
  } 
  return availableSpace;
}


// a few input >> 4 - compulsory input

int solution(int n, int k, int r_q, int c_q, std::vector<std::vector<int>> obstacles) {
  // std::vector<std::vector<int>> board (n, std::vector<int> (n));
  // availableStep for queen is up, right, left, down and all diagonal direction
  // board number minus one for queen space
  // int initialNumber = n*n-1;
  
  std::vector<std::vector<int>> availableSpace = findAvailable(n, r_q, c_q);
  for(int i=0; i < obstacles.size(); i++) {
    std::cout<<".";
    for(int j = 0; j < availableSpace.size();j++ ) {
      std::cout<<".";
      if(obstacles.at(i) == availableSpace.at(j)) {
        availableSpace.erase(availableSpace.begin()+j);
        break;
      }
    }
  
  }
  std::cout << "Done input for number="<< n << ", obstacles="<< k << ", queen position=("<< r_q <<"," <<c_q <<")" << std::endl;

  return availableSpace.size();
}

int main()
{
  int n = 0, k = 0, r_q = 0, c_q;
  std::vector<std::vector<int>> obstacle;
  std::cin >>n >> k >> r_q >> c_q;
  std::cout << "Done input for number="<< n << ", obstacles="<< k << ", queen position=("<< r_q <<"," <<c_q <<")" << std::endl;
  r_q = r_q-1;
  c_q = c_q -1;
  if (k >= 0)
  {
    int  x = 0, y=0;
    for (int i = 0; i < k; i++) {
      std::cout<<"Input Obstacles " << i+1 <<std::endl;
      std::cin >> x >> y;
      std::vector<int> row;
      row.push_back(x);
      row.push_back(y);
      obstacle.push_back(row);
    }
  }
  std::cout << "waiting for an answer";
  std::cout << solution(n,k,r_q,c_q,obstacle);
  std::cout << "\nDone giving answer";
  return 0;
}