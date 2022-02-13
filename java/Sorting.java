import java.util.Arrays;
import java.util.Collections;

public class P1 {
	public static void main(String args[]) {
		int[] array = new int[]{90,23,5,109,12,22,67,34};
	
		//sort here by calling function
		//sort by using util.Arrays method
		array = P1.sort1(array);
		System.out.println("Sorted Array by Using util.Arrays Method: ");
		System.out.println(Arrays.toString(array));
		// sort reverse order using util.Arrays and util.Collections
		Integer[] arr = P1.reverseSort1(array);
		System.out.println("Reverse Sort Array by Using util.Arrays Method: ");	
		System.out.println(Arrays.toString(arr));

		//sort using for loop
		System.out.println("\n");

		array = P1.sort2(array);	
		System.out.println("Sorted Array by Using for-loop method: ");
		System.out.println(Arrays.toString(array));

		// sort reverse order using util.Arrays and util.Collections
		array = P1.reverseSort2(array);
		System.out.println("Reverse Sort Array by Using for-loop Method: ");	
		System.out.println(Arrays.toString(array));
	}

	public static int[] sort1(int[] array) {
		Arrays.sort(array);
		return array;
	}	

	public static int[] sort2(int[] array) {
		for(int i = 0; i < array.length; i++) {
			for(int j = i+1; j < array.length;j++) {
				if(array[i]>array[j]) {
					int temp = array[i];
					array[i] = array[j];
					array[j] = temp;
				}
			}
		}
		return array;
	}
	
	public static Integer[] reverseSort1(int[] array) {
		Integer[] arr = Arrays.stream(array).boxed().toArray(Integer[]::new);
		// Integer [] arr = {23, -9, 78, 102, 4, 0, -1, 11, 6, 110, 205}; 
		Arrays.sort(arr, Collections.reverseOrder());
		// array = Arrays.stream(arr). toArray(int[]::new);
		return arr;
	}

	public static int[] reverseSort2(int[] array) {
		for(int i = 0; i < array.length; i++) {
			for(int j = i+1; j < array.length;j++) {
				if(array[i]<array[j]) {
					int temp = array[i];
					array[i] = array[j];
					array[j] = temp;
				}
			}
		}
		return array;
	}

}
