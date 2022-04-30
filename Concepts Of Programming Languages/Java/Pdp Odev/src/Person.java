
public class Person {
	private String name;
	private double money;
	
	private double moneyPerTour;
	private int betNumber;
	public Person(String name, double money, double moneyPerTour, int betNumber) {
		super();
		this.name = name;
		this.money = money;
		this.moneyPerTour = moneyPerTour;
		this.betNumber = betNumber;
	}
	public String getName() {
		return name;
	}
	public void setName(String name) {
		this.name = name;
	}
	public double getMoney() {
		return money;
	}
	public void setMoney(double money) {
		this.money = money;
	}
	public double getMoneyPerTour() {
		return moneyPerTour;
	}
	public void setMoneyPerTour(double moneyPerTour) {
		this.moneyPerTour = moneyPerTour;
	}
	public double getBetNumber() {
		return betNumber;
	}
	public void setBetNumber(int betNumber) {
		this.betNumber = betNumber;
	}
	
	
	

}
