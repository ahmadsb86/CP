/*
ID: ahmadsa3
LANG: JAVA
TASK: gift1
*/

import java.io.*;
import java.util.*;
import java.util.stream.Collectors;

public class gift1 {

	public static void main(String[] args) throws IOException {

		final String probName = new Throwable().getStackTrace()[0].getClassName();
		File myObj = new File(probName + ".in");
		if (myObj.createNewFile()) {
			System.out.println("File created: " + myObj.getName());
		}
		BufferedReader in = new BufferedReader(new FileReader(probName + ".in"));
		String[] inputs = in.lines().collect(Collectors.joining(System.lineSeparator())).split("\\r?\\n");

		
		
		
		
		
		//TODO Code Here.
		
		LinkedHashMap <String, Integer> cash = new LinkedHashMap<String, Integer>();
		String giver = "";
		
		for(int i = 0; i < inputs.length; i++) {
			
			if(i == 0) {
				for(int j = 0; j < Integer.parseInt(inputs[0]); j++) {
					i ++;
					cash.put(inputs[i], 0);
				}
			}
			
			else if(inputs[i].split(" ")[0].matches(".*\\d.*")) {
				
				String[] words = inputs[i].split(" ");
				int leftOver = 0;
				int divide = 0;
				try {			
					leftOver = Integer.parseInt(words[0]) % Integer.parseInt(words[1]);
					divide = (Integer.parseInt(words[0]) - leftOver )/Integer.parseInt(words[1]);
				}
				catch(Throwable e) {				
				}
				
				cash.replace(giver, cash.get(giver) - Integer.parseInt(words[0]));
				cash.replace(giver, cash.get(giver) + leftOver);
				
				for(int j = 0; j < Integer.parseInt(words[1]); j++) {
					i ++;
					cash.replace(inputs[i], cash.get(inputs[i]) + divide);
					
				}
			}
			else {
				giver = inputs[i];
			}
		}
		
		
		//TODO Code Here
		
		
		
		
		

		PrintWriter out = new PrintWriter(new BufferedWriter(new FileWriter(probName + ".out")));
		
		
		
		Set<String> keys = cash.keySet();
		//print all the keys 
		for (String key : keys) {
			out.write(key + " " + cash.get(key) + "\n");
		}
		System.out.println("Output Saved.");
		out.close();
		in.close();
		System.exit(0);
	}

}