import java.util.Arrays;
import java.util.Comparator;

/**
 * Java sort 2-d array consider that the array element have same length
 */
public class Sort2d {
  public static void main(String[] args) {
    int[][] arr = {
      {1, 2, 3, 34,21,54,22,21,14}, 
      {4, 5, 6, 9,12,15,11,43,2}, 
      {7, 41, 23,54,12,29}, 
    };

    // sort the 2-d array elements ascesnding order
    for(int i = 0; i < arr.length; i++) {
      arr[i] = Sort2d.sort1(arr[i]);
    }
    System.out.println("Sort by elements");
    for(int[] array: arr) {
      System.out.println(Arrays.toString(array));
    }

    // sort the 2-d array by using specific column
    int column = 3;
    sortByColumn(arr, column);
    System.out.println("Sort 2-d array by column number " + column);
    for(int[] array: arr) {
      System.out.println(Arrays.toString(array));
    }
  }

  public static int[] sort1(int[] array) {
		Arrays.sort(array);
		return array;
	}	

  public static void sortByColumn (int[][] arr, int col) {
      Arrays.sort(arr, new Comparator<int[]>() {

        @Override
        public int compare(int[] arg0, int[] arg1) {
          if (arg0[col] > arg1[col]) {
            return 1;
          }else {
            return -1;
          }
        }
        
      });
  }
}
