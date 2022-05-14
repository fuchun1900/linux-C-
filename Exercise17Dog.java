package Demo;

public class Exercise17Dog {
	String nickname;
	int health = 60;
	int intimacy = 0;
	String type;
	
	public Exercise17Dog(String nickname, int health, String type) {
		this.nickname = nickname;
		this.health = health;
		this.type = type;
	}
	
	public Exercise17Dog(String nickname, String type) {
		this.nickname = nickname;
		this.type = type;
	}
		
	public void show() {
		System.out.println("我的名字是" + this.nickname + ", 健康值是" + this.health +
				       ",和主人的亲密度是" + this.intimacy + ",我是一个" + this.type);
	}

}
