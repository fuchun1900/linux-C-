package Demo;

public class Exercise16Seller {
	String name;
	
	public String getName() {
		return this.name;
	}
	
	public void setName(String name) {
		this.name = name;
	}
	
	public void sell(Exercise16Excelle car) {
		System.out.println("Seller : " + this.name + " sell " + 
					 car.type +" " + car.id);
	}
	
	public void sell(Exercise16Regal car) {
		System.out.println("Seller : " + this.name + " sell " + 
					 car.type +" " + car.id);
	}
	
	public void sell(Exercise16Excelle car, int num) {
		System.out.println("Seller : " + this.name + " sell " + num + " " +
					 car.type +" " + car.id);
	}
}
