package Demo;

public class Exercise16Demo {
	
	public static void main(String args[]) {
		Exercise16Seller seller = new Exercise16Seller();
		seller.setName("jack");
		Exercise16Regal regal1 = new Exercise16Regal("君悦","1001");
		Exercise16Excelle excelle1 = new Exercise16Excelle("凯悦","1002");
		seller.sell(regal1);
		seller.sell(excelle1,100);
		
	}
	


}
