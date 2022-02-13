import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

/**
 * Complete the function birthdayCakeCandles in the editor below.
 * birthdayCakeCandles has the following parameter(s):
 * int candles[n]: the candle heights
 * 
 * Ouput format:
 * Returns
 * int: the number of candles that are tallest
 * 
 * Input Format: 
 * The first line contains a single integer, n , the size of candles[].
 * The second line contains n space-separated integers, where each integer i describes the height of candles[i].
 */
public class BirthdayCakeCandles {
  public static void main(String[] args) {
    Scanner in = new Scanner(System.in);
    int num = in.nextInt();
    List<Integer> candles =  new ArrayList<>();
    for(int i = 0; i < num ; i ++) {
      candles.add(in.nextInt());
    }
    birthdayCakeCandles(candles);
    in.close();
  }

  public static int birthdayCakeCandles(List<Integer> candles) {
    // Write your code here
        // find max value
        // count number of max
        int max = Integer.MIN_VALUE, count  = 0;
        for (Integer candle : candles ) {
            if(max < candle) {
                max  = candle;
                count = 0;
            }
            if(max == candle) {
                count ++;
            }
        }
        return count;
    }
}
