/**
 * Name: Muhammad Nurhaziq bin Mohd Zamani
 * Question from hackerrank
 * Given a square matrix, calculate the absolute difference between the sums of its diagonals.
 * 
 * Input Format:
 * The first line contains a single integer, , the number of rows and columns in the square matrix .
 * Each of the next  lines describes a row, , and consists of  space-separated integers .
 * 
 * Output:
 * Return the absolute difference between the sums of the matrix's two diagonals as a single integer.
 */
import java.util.*;

public class DiagonalDifference {
  public static void main(String[] args) {
    
  }

  public static int diagonalDifference(List<List<Integer>> arr) {
    // Write your code here
        int totalRight = 0;
        int totalLeft = 0;
        for(int i = 0; i < arr.size(); i++) {
            totalRight += arr.get(i).get(i);
            totalLeft += arr.get(i).get(arr.size()-(i+1));
        }
        return Math.abs(totalRight-totalLeft);
    }
}
