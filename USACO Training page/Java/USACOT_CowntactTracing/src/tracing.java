/*
ID: ahmadsa3
LANG: JAVA
TASK: tracing
*/

import java.io.*;
import java.util.*;


public class tracing {

	public static void main(String[] args) throws IOException {

		Kattio io = new Kattio(new Throwable().getStackTrace()[0].getClassName());
		Kattio sys = new Kattio();
		
		int numberOfCows = io.nextInt();
		int Timestamps = io.nextInt();
		String[] states = io.next().split("");
		ArrayList<handshake> interactions= new ArrayList<handshake>();		
		
		for (int i = 0; i < Timestamps; i++) {			
			interactions.add(new handshake(io.nextInt(),io.nextInt(),io.nextInt()));
		}
		
		Collections.sort(interactions);
		
		
		//loop through every possible patient O
		for(int i = 0; i < numberOfCows; i++) {
			LinkedList<String> tryStates = new LinkedList<String>();
			tryStates.clear();
			for (int j = 0; j < states.length; j++) {
				tryStates.add("0");
			}
			tryStates.set(i, "1");
			
			for (handshake b : interactions) {
				
				
				if (tryStates.get(b.x - 1) == "1") {
					tryStates.set(b.y - 1, "1");
				}
				else {
					tryStates.set(b.y - 1, "0");
				}
				
			}
			
			if(tryStates.equals(Arrays.asList(states))) {
				io.println(i+1);
				sys.println("HRHJASBDHASHBGDAHSD");
			}
			
		}
		
		
		
		io.close();
		sys.close();
		
		
		
	}
}



class handshake implements Comparable{
	public int t;
	public int x;
	public int y;
	public handshake(int a, int b, int c) {
		t = a;
		x = b;
		y = c;
	}
	
	@Override
    public int compareTo(Object comparestu) {
        int compareage=((handshake)comparestu).t;
        return this.t-compareage;
    }

}



/*






















*/

class Kattio extends PrintWriter {
	private BufferedReader r;
	private StringTokenizer st;

	// standard input
	public Kattio() {
		this(System.in, System.out);
	}

	public Kattio(InputStream i, OutputStream o) {
		super(o);
		r = new BufferedReader(new InputStreamReader(i));
	}

	// USACO-style file input
	public Kattio(String problemName) throws IOException {
		super(new File(problemName + ".out"));
		new File(problemName + ".in").createNewFile();
		r = new BufferedReader(new FileReader(problemName + ".in"));

	}

	// returns null if no more input
	public String next() {
		try {
			while (st == null || !st.hasMoreTokens())
				st = new StringTokenizer(r.readLine());
			return st.nextToken();
		} catch (Exception e) {
		}
		return null;
	}

	public int nextInt() {
		return Integer.parseInt(next());
	}

	public double nextDouble() {
		return Double.parseDouble(next());
	}

	public long nextLong() {
		return Long.parseLong(next());
	}
}
