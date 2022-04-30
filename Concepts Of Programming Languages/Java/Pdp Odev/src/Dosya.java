import java.io.FileInputStream;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.Scanner;

public class Dosya {
	
	private String kisiTxt;
	private String sayiTxt;
	public Dosya(String kisiTxt,String sayiTxt) {
		this.kisiTxt=kisiTxt;
		this.sayiTxt=sayiTxt;
	}
	public List<Integer> returnNumber(){
		
		List<Integer> list = new ArrayList<Integer>() ;
		try    
		{  
		//the file to be opened for reading  
		FileInputStream fis=new FileInputStream(sayiTxt);       
		Scanner sc=new Scanner(fis);    //file to be scanned  
		//returns true if there is another line to read  
		while(sc.hasNextLine())  
		{  
		   int number=Integer.parseInt(sc.nextLine());
		   list.add(number);
		}  
		sc.close();     //closes the scanner  
		}  
		catch(IOException e)  
		{  
		e.printStackTrace();  
		} 
		return list;
	}
public List<Person> returnPerson(){
		
		List<Person> list = new ArrayList<Person>() ;
		try  
		{  
		//the file to be opened for reading  
		FileInputStream fis=new FileInputStream(kisiTxt);       
		Scanner sc=new Scanner(fis);    //file to be scanned  
		//returns true if there is another line to read  
		while(sc.hasNextLine())  
		{ 
			String[] arrOfStr = sc.nextLine().split("#",4);
			
			String name=arrOfStr[0];
			double money=Double.parseDouble(arrOfStr[1]);
			double moneyPerTour=Double.parseDouble(arrOfStr[2]);
			int betNumber=Integer.parseInt(arrOfStr[3]);
			Person person=new Person(name,money,moneyPerTour,betNumber);
			list.add(person);
			
		}  
		sc.close();     //closes the scanner  
		}  
		catch(IOException e)  
		{  
		e.printStackTrace();  
		} 
		return list;
	}
	

}
