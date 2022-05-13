package Demo;
import java.util.Scanner;

public class Exercise15UpOrDown {
	
	int rand[] =new int[10];
	
	public Exercise15UpOrDown() {
		for(int i = 0; i < 10; i++) {
			this.rand[i] = (int) (Math.random() * 100 + 1);
		}
	}
	
	public void sortByArgument(int arr[], String arg) {
		if(arg.equals("up")) {
			for(int i = 0; i < arr.length - 1; i++) {
				for(int j = 0; j < arr.length - 1 - i ;j ++) {
					if(arr[j] > arr[j + 1]) {
						int temp = arr[j + 1];
						arr[j + 1] = arr[j];
						arr[j] = temp;
					}
				}
			}
		}
		else if(arg.equals("down")) {
			for(int i = 0; i < arr.length - 1; i++) {
				for(int j = 0; j < arr.length - 1 - i ;j ++) {
					if(arr[j] < arr[j + 1]) {
						int temp = arr[j + 1];
						arr[j + 1] = arr[j];
						arr[j] = temp;
					}
				}
			}
		}
		else
			System.out.println("Not valid.");
		
	}
	
	public void showArr(int arr[]) {
		for(int i : arr) {
			System.out.print(i + " ");
		}
	}
	
	public static void main(String args[]) {
		Exercise15UpOrDown test = new Exercise15UpOrDown();
		test.showArr(test.rand);
		System.out.println("\nPlesae enter up or down");
		Scanner sc = new Scanner(System.in);
		String arg = sc.next();
		test.sortByArgument(test.rand, arg);
		test.showArr(test.rand);
	}
	

}
