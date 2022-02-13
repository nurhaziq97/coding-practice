/**
 * Name : Muhammad Nurhaziq bin Mohd Zamani
 * Make a java function to remove duplicate elements
 */
import java.util.Arrays;
public class RemoveDuplicateArray {
  public static void main(String[] args) {
    int a[] = { 1, 1, 2, 2, 2 };
    a = removeDuplicates(a);
    System.out.println(Arrays.toString(a));
  }

  public static int[] removeDuplicates(int[] arr) {
    int[] k = new int[arr.length];
    int count = 0;
    // Array must be sorted out first
    Arrays.sort(arr);

    // this loop excludes the last array
    for(int i = 0; i < arr.length-1; i++) {
      if(arr[i] != arr[i+1]) {
        k[count++] = arr[i];
      }
    }
    // take last elements of array
    k[count++] = arr[arr.length-1]; 
        
    // k will have unfill elements at the end of its array
    arr = new int[count];
    for(int i = 0; i < count; i++) {
      arr[i] = k[i];
    }

    return arr;
  }
}
