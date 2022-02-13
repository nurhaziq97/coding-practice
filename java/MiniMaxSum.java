import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class MiniMaxSum {
  public static void main(String[] args) {
    Scanner in = new Scanner(System.in);
    List<Integer> arr =  new ArrayList<>();
    for(int i = 0; i < 5 ; i ++) {
      arr.add(in.nextInt());
    }
    miniMaxSum(arr);
    in.close();
  }

  public static void miniMaxSum(List<Integer> arr) {
    // Write your code here
        long min = Long.MAX_VALUE, max = Long.MIN_VALUE, total = 0;
        
        for(Integer num : arr) {
            total += num;
        }
        for(Integer num : arr ) {
          System.out.println("TEST:" + (total-num));
          System.out.println("MIN:" + min);
          
            if(max < total-num) {
                max = total-num;
            }if(min > total-num) {
                min = total-num;
            }
        }
        System.out.print(min+" ");
        System.out.print(max);
    }
}