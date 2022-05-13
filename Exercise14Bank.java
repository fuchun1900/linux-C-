package Demo;
import java.util.Scanner;

public class Exercise14Bank {
	
	protected Exercise14Customer custmoer;
	
	public Exercise14Bank(String name, String password, double account) {
		this.custmoer = new Exercise14Customer(name,password,account);
	}
	
	protected boolean logIn() {
		int count = 0;
		
		do {
			if(count > 0) {
				System.out.println("Wrong id or wrong password,please try it again.");
			}
			if(count > 2) {
				System.out.println("You entered wrong three times and the system is locked.");
				break;
			}
			System.out.println("Welcome to our bank system,please login first.(q to quit)");
			System.out.println("..............................................");
			System.out.print("Please enter your user name :");
			Scanner sc = new Scanner(System.in);
			String username = sc.next();
			if(username.equals("q"))
			{
				System.out.println("Thank you for visiting.");
				break;
			}
			System.out.print("Please enter your user password :");
			String password = sc.next();
			count++;
			if(username.equals(custmoer.username) && password.equals(custmoer.password))
				return true;
		}while(true);
		
		return false;
	}
	
	protected void showAccount() {
		while(logIn()) {
			int choose;
			
			do {
				System.out.println("Hello " + custmoer.username + " !" + " please choose your service : ");
				System.out.print("1. Show account" + "\n" +
							"2. Save money" + "\n" + 
							"3. Take money" + "\n" + 
							"4. Quit");
				System.out.println("Please enter the number : ");
				Scanner sc = new Scanner(System.in);
				choose = sc.nextInt();
				switch(choose) {
				case 1:
					System.out.println("You still have " + custmoer.remaining + " yuan in your account");
					break;
				case 2:
					saveAccount();
					break;
				case 3:
					takeAccount();
					break;
				case 4:
					System.out.println("Quit to main manu !");
					break;
				default:
					System.out.println("Please enter in the range 1 - 4 :");
					break;
				}	
			}while(choose != 4);
		}
	}
	
	protected void saveAccount() {
		System.out.println("How much money you want to save :");
		Scanner sc = new Scanner(System.in);
		double save = sc.nextDouble();
		custmoer.remaining += save;
		System.out.println("You have deposited "+ save +" yuan");
	}
	
	protected void takeAccount() {
		System.out.println("How much money you want to take off :");
		Scanner sc = new Scanner(System.in);
		double take = sc.nextDouble();
		while(take > custmoer.remaining) {
			System.out.print("Insufficient balance，please withdraw money within your balance "
					+ custmoer.remaining + " yuan: ");
			Scanner sc2 = new Scanner(System.in);
			take = sc2.nextDouble();
		}
		custmoer.remaining -= take;
		System.out.println("You have withdraw "+ take +" yuan");
	}
}
