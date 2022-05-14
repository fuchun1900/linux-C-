package Demo;
import java.util.Scanner;

public class Exercise17Demo {
	
	public static void main(String args[]) {
		System.out.println("欢迎光临宠物店👏");
		System.out.println("请输入您要饲养的宠物的昵称: ");
		Scanner sc = new Scanner(System.in);
		String name = sc.next();
		int choose;
		String type;
		do {
			System.out.print("请选择要领养的宠物类型 1.狗狗 2.企鹅 : ");
			Scanner sc2 = new Scanner(System.in);
			choose = sc2.nextInt();
		}while(choose != 1 && choose != 2);
		switch(choose) {
		case 1:
			int choose2;
			Exercise17Dog mydog;
			do {
				System.out.print("请选择狗狗的品种 1.拉布拉多 2.雪纳瑞: ");
				Scanner sc2 = new Scanner(System.in);
				choose2 = sc2.nextInt();
			}while(choose2 != 1 && choose2 != 2);
			type = (choose2 == 1)? "拉布拉多" : "雪纳瑞";
			System.out.print("请选择狗狗的健康值(1 - 100之间) :");
			Scanner sc3 = new Scanner(System.in);
			int health = sc3.nextInt();
			if (health < 1 || health > 100) {
				System.out.println("健康值在1-100之间，默认值为60");
				mydog = new Exercise17Dog(name,type);
			} else {
				mydog = new Exercise17Dog(name,health,type);
			}
			System.out.println("宠物的自白");
			System.out.println("我的名字是" + mydog.nickname + ",健康值是" + mydog.health +
						",和主人的亲密值是" + mydog.intimacy + ",是一只" + mydog.type);
				
		case 2:
			int choose3;
			ExercisePenguin penguin;
			do {
				System.out.print("请选择企鹅的性别 1.雄性 2.雌性: ");
				Scanner sc2 = new Scanner(System.in);
				choose2 = sc2.nextInt();
			}while(choose2 != 1 && choose2 != 2);
			type = (choose2 == 1)? "雄性" : "雌性";
			System.out.print("请选择企鹅的健康值(1 - 100之间) :");
			Scanner sc4 = new Scanner(System.in);
			int health2 = sc4.nextInt();
			if (health2 < 1 || health2 > 100) {
				System.out.println("健康值在1-100之间，默认值为60");
				penguin = new ExercisePenguin(name,type);
			} else {
				penguin = new ExercisePenguin(name,health2,type);
			}
			System.out.println("宠物的自白");
			System.out.println("我的名字是" + penguin.nickname + ",健康值是" + penguin.health +
						",和主人的亲密值是" + penguin.intimacy + ",是一只" + penguin.gender + "企鹅");
			
		}
	}

}
