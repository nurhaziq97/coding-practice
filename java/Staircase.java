import java.util.Scanner;

public class Staircase {
  /**
   * get an integer
   * print out the staircase of # 
   * @param args
   */
  
  public static void main(String[] args) {
    Scanner in = new Scanner(System.in);
    int num = in.nextInt();
    staircase(num);
    in.close();
  }
  public static void staircase(int n) {
    // Write your code here
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n-(i+1);j++ ) {
                System.out.print(" ");
            }
            for(int j = n-(i+1); j < n; j++) {
                System.out.print("#");
            }
            System.out.println();
        }
    }
}
