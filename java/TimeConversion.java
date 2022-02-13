/**
 * Name: Muhammad Nurhaziq bin Mohd Zamani
 * Hackerrank
 * 
 * Complete the timeConversion function in the editor below. It should return a new string representing the input time in 24 hour format.
 * timeConversion has the following parameter(s):
 * string s: a time in 12 hour format
 * 
 * Returns
 * string: the time in 24 hour format
 * 
 * Input Format
 * A single string  that represents a time in 12-hour clock format
 */
import java.text.SimpleDateFormat;

public class TimeConversion {
  public static void main(String[] args) {
    String s  = "07:05:45PM";
    s = timeConversion(s);
    System.out.println(s);
  }

  public static String timeConversion(String s) {
    // Write your code here
    String convertTime  = "";
    try{
        SimpleDateFormat formatter  = new SimpleDateFormat("hh:mm:ssaa");
        convertTime = new SimpleDateFormat("HH:mm:ss").format(formatter.parse(s));
    }catch(Exception e) {
      e.printStackTrace();
    }
    return convertTime; 
  }
}
