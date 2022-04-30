import java.util.ArrayList;
import java.util.List;

public class Game {
	private List<Person> personList=new ArrayList<Person>();
	private List<Integer> numberList=new ArrayList<Integer>(); 
	
	
	public Game(List<Person> personList,List<Integer> numberList) {
		this.personList=personList;
		this.numberList=numberList;
	}
	
	public void Basla() {
		int tour=0;
		double moneyOnTable=0;
		double earnedMoney=0;
		double lostMoney=0;
		double counter=0;
		for(int i=0;i<numberList.size();i++) {
			tour+=1;
			for(int j=0;j<personList.size()-counter-1;i++) {
				if (personList.get(j).getMoney()>=1000) {
					if(numberList.get(i)==personList.get(j).getBetNumber()) {
						earnedMoney=((personList.get(j).getMoney()*personList.get(j).getMoneyPerTour())*10);
						personList.get(j).setMoney(earnedMoney+(personList.get(j).getMoney()));
						
					}
					else {
						lostMoney=personList.get(j).getMoneyPerTour()*personList.get(j).getMoney();
						personList.get(j).setMoney(personList.get(j).getMoney()-lostMoney);
						
					}
				}
				if(personList.get(j).getMoney()<1000) {
					personList.remove(j);
					counter++;
				}
				if(personList.isEmpty()) {
					break;
				}
			}
			
			
			
		}
		
		
		
		
	}

}
