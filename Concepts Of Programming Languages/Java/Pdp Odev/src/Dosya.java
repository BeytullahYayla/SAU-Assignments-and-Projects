import java.io.FileInputStream;
import java.io.IOException;
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Dosya {
	
	private String kisiTxt;
	private String sayiTxt;
	public Dosya(String kisiTxt,String sayiTxt) {
		this.kisiTxt=kisiTxt;
		this.sayiTxt=sayiTxt;
	}
	public List<String> sayiDondur(){
		
		List<String> list = new ArrayList<String>() ;
		try  
		{  
		//the file to be opened for reading  
		FileInputStream fis=new FileInputStream(sayiTxt);       
		Scanner sc=new Scanner(fis);    //file to be scanned  
		//returns true if there is another line to read  
		while(sc.hasNextLine())  
		{  
		   list.add(sc.nextLine());
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