/**
 * Practice binary search in java
 */

import java.util.Arrays;

public class BinarySearch {
  public static void main (String[] args) {
		int[] array = new int[]{90,23,5,109,12,22,67,34};
    
    // first step is to sort the array into ascending order
    System.out.println("Binary Search Recursive");
    Arrays.sort(array);
    System.out.println(Arrays.toString(array));
    int target = 90;
    System.out.println("The number " + target + " can be found at index : " + recursiveBinarySearch(array, target));
    // System.out.println(recursiveBinarySearch(array, target));
    
    System.out.println("Binary Search without recursive");
    target = 23;
    System.out.println("The number " + target + " can be found at index : " + binarySearchWithoutRecursive(array, target));
    // find value
  }

  // return index number for searched number
  public static int recursiveBinarySearch(int[] array, int target) {
    return binarySearch(array, 0, array.length-1, target);
  }

  public static int binarySearch(int[] array, int start, int end, int target) {
    int middle = (start+end)/2;
    if(start > end) {
      return -1;
    }
    if(target == array[middle]) {
      return middle;
    }else if(target<array[middle]) {
      return binarySearch(array, start, middle-1, target);
    }else {
      return binarySearch(array, middle+1, end, target);
    }
  }

  public static int binarySearchWithoutRecursive(int[] array, int target) {
  
    int start = 0;
    int end = array.length;
    int middle = (start+end)/2;
    
    while(start<=end) {
      if(array[middle] == target) {
        return middle;
      }else if(array[middle] < target) {
        start = middle + 1;
      }else {
        end = middle - 1;
      }
      middle  = (start+end)/2;
    }
    
    return -1;
  }
}
